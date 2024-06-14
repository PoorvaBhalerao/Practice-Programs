// Write a program which accept string from user and copy the contents of that string to another string
//(Implement strcpy function)
//Input: "Marvellous Multi Os"
//Output: "Marvellous Multi Os"  in another string
#include<iostream>
#include<string.h>
using namespace std;

void strcpyX(char *Src, char *Dest)
{
    
    while(*Src != '\0')
    {
        *Dest = *Src;
        Dest++;
        Src++;
    }
    *Dest = '\0';    
}

int main()
{
    char Arr[30] = "India is my Country.";
    char Brr[30];

    strcpyX(Arr, Brr);

    cout<<"Destination string is: "<<Brr<<endl;
}