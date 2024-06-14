// Write a program which accept string from user and copy upto N contents which is given by user of that string to another string
//(Implement strncpy function)
//Input: "Marvellous Multi Os"
//          10       
//Output: "Marvellous"  in another string
#include<iostream>
#include<string.h>
using namespace std;

void StrNcpyX(char *Src, char *Dest, int iCnt)
{
    while((*Src != '\0') && (iCnt != 0))
    {

        *Dest = *Src;
        Dest++;
        Src++;
        iCnt--;
    }
    *Dest = '\0';    
}

int main()
{
    int iNo = 0;
    char Arr[30] = "India is my Country.";
    char Brr[30];

    cout<<"Enter the number for which that much of characters to copy: "<<endl;
    cin>>iNo;

    StrNcpyX(Arr, Brr, iNo);

    cout<<"Destination string is: "<<Brr<<endl;
}