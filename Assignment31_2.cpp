//Write a program which accept string from user and count the number of words from string
//Input: "Marvellous Multi OS"
//Output: 10

#include<iostream>
#include<string.h>
using namespace std;

int LenLargeWord(char *str)
{
    int icnt = 0;
    int iMax = 0;
    
    if(*str == '\0')
    {
        return -1;
    }


    while(*str != '\0')
    {
        if(*str == ' ')
        {
            str++;
            icnt = 0;
        }
        icnt++;
        str++;
        
        if(icnt > iMax)
        {
            iMax = icnt;
        }
    }
    return iMax;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    iRet = LenLargeWord(Arr);

    cout<<"Length of largest word in string is: "<<iRet<<endl;

    return 0;
}