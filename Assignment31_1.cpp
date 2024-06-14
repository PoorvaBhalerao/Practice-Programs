//Write a program which accept string from user and count the number of words from string
//Input: "Marvellous Multi OS"
//Output: 3
//Input:"Marvellous       Multi     Os Pune"
//Output; 4
#include<iostream>
#include<string.h>
using namespace std;

int CountWords(char *str)
{
    int iCnt = 0;
    
    if(*str == '\0')
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    iCnt++;
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    iRet = CountWords(Arr);

    cout<<"Total words in string are: "<<iRet<<endl;

    return 0;
}