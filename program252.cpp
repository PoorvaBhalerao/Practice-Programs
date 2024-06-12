//Accpet string from user that string contains data and copy only capital characters into another empty string.
//Using User defined fucntion
//Input: HEllo WorLd
//Output: HEWL

#include<iostream>
using namespace std;

void strcpyCapitalX(char *Src, char *Dest)
{
    
    while(*Src != '\0')
    {
        if((*Src >= 'A') && (*Src<='Z')) 
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

    strcpyCapitalX(Arr, Brr);      

    cout<<"Destination string with Capital characters is: "<<Brr<<endl;

    
    return 0;
}