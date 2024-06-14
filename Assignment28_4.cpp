// Write a program which accept string from user and copy only small characters to another string
//Input: "Marvellous Multi OS"      
//Output: arvellousulti          in another string
#include<iostream>
#include<string.h>
using namespace std;

void StrSmallX(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        if((*Src >= 'a') && (*Src <='z'))
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }
    *Dest = '\0';    
}

int main()
{
    int iNo = 0;
    char Arr[30];
    char Brr[30];

    cout<<"Enter Source String: "<<endl;
    cin.getline(Arr, 30);

    StrSmallX(Arr, Brr);

    cout<<"Destination string is: "<<Brr<<endl;
}