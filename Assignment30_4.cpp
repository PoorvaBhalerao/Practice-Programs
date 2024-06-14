//Write a program which accepts string from user and 
//reverse the contains of string by toggling it

//Input: "Marvellous"
//Output: "SUOLLEVRAm"

#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;

void StrRevTogX(char *str)
{
    char temp;
    char *first = NULL;
    char *last = NULL;
    first = str;
    last = str;
    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(first <= last)
    {
        if((*first >= 'a') && (*first <= 'z'))
        {
            (*first) = (*first) -32;
        }
        else if((*first >= 'A') && (*first <= 'Z'))
        {
            (*first) = (*first) + 32;
        }
        
        if(((*last >= 'a') && (*last <='z')))
        {
            (*last) = (*last) -32;
        }
        else if((*last >= 'A') && (*last <= 'Z'))
        {
            (*last) = (*last) + 32;
        }
       
        temp = *first;
        *first = *last;
        *last = temp;
       
        first++;
        last--;
    } 
}

int main()
{
    char Arr[50];

    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    StrRevTogX(Arr);

    cout<<"Reversed and toggled string is: "<<Arr<<endl;

    return 0;
}