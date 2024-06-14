//Write a program which accept string from user and reverse each word in place
//Input: "Marvellous Multi OS"
//Output: "suollevraM itluM SO"

#include<iostream>
#include<string.h>
using namespace std;
void reverseword(char *start, char *end)
{
    char temp;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void RevWords(char *str)
{
    char *wordstart =str;
    char *wordend = str;
    
    while(*wordend != '\0')
    {
        while((*wordend) && (*wordend != ' '))
        {
            wordend++;
        }

        reverseword(wordstart, wordend-1);

        wordstart = wordend;
        if(*wordstart)
        {
            wordstart++;
        }
        wordend = wordstart;
    }
}

int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    RevWords(Arr);

    cout<<"Reversed Words of string is: "<<Arr<<endl;

    return 0;
}