//Accpet string from user that string contains data and copy only small characters into another empty string.
//Using User defined fucntion
//Input: HEllo WorLd
//Output: lloord

#include<iostream>
using namespace std;

void strcpysmallX(char *Src, char *Dest)
{
    
    while(*Src != '\0')
    {
        if((*Src >= 'a') && (*Src<='z')) 
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
    char Arr[30];
    char Brr[30];

    cout<<"Enter Source String: "<<endl;
    cin.getline(Arr, 30);

    strcpysmallX(Arr, Brr);      

    cout<<"Destination string with small characters is: "<<Brr<<endl;

    
    return 0;
}