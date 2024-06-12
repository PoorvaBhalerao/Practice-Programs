//Accpet string from user that string contains data 
//and copy to empty string removing white spaces.
//Using User defined fucntion


#include<iostream>
using namespace std;

void strcpyRemoveWhiteX(char *Src, char *Dest)
{
    
    while(*Src != '\0')
    {
        if((*Src != ' ')) 
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

    strcpyRemoveWhiteX(Arr, Brr);      

    cout<<"Destination string without white spaces is: "<<Brr<<endl;

    
    return 0;
}