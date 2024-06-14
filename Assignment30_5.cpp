//Write a program which accepts string from user and 
//check whether it is palindrome or not without considering its case
//Input: "1abccBa1"
//Output: True

#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;

bool StrPalindrome(char *str)
{
    
    char *first = NULL;
    char *last = NULL;

    first = str;
    last = str;

    while(*last != '\0')
    {
        last++;
    }
    last--;
    
    while(first < last)
    {
        if((*first >= 'A') && (*first <= 'Z'))
        {
            *first = *first + 32;
        }
       
        
        if((*last >= 'A') && (*last <= 'Z'))
        {
            *last = *last + 32;
        }            
        

        if(*first != *last)
        {
            return false;
        }
        
        first++;
        last--;
    }

    return true;
}

int main()
{
    char Arr[50];
    bool bRet = false;

    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    bRet = StrPalindrome(Arr);

    if(bRet == true)
    {
        cout<<"String is pallindrome"<<endl;
    }
    else
    {
        cout<<"String is not pallindrome"<<endl;
    }

    return 0;
}