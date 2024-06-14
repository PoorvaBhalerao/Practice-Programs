// Write a program which accept 2 strings from user and concat second string after first string.
//(Implement strcat() function)
//Input: Fist string: "Marvellous"   Second String: "Info"   
//Output: MarvellousInfo          in another string
#include<iostream>
#include<string.h>
using namespace std;

void StrcatX(char *Src, char *Dest)
{
    while(*Src != '\0')
    {
        Src++;        
    }

    while(*Dest != '\0')
    {
        *Src = *Dest;
        Src++;
        Dest++;
    }       
    *Src = '\0';    
}

int main()
{
    int iNo = 0;
    char Arr[50];
    char Brr[50];

    cout<<"Enter First String: "<<endl;
    cin.getline(Arr, 50);

    cout<<"Enter Second String: "<<endl;
    cin.getline(Brr, 50);

    StrcatX(Arr, Brr);

    cout<<"Destination string is: "<<Arr<<endl;
}