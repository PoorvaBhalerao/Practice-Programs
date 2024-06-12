//Accpet string from user that string contains data 
//and concatenate to another string which contains existing data.
//Using user defined function


#include<iostream>
#include<string.h>
using namespace std;

void strcatX(char *Dest, char *Src)
{
    
    while(*Dest != '\0')
    {
        Dest++;
    }
        
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
    char Arr[30];
    char Brr[30] = "Hello ";    //space is given

    cout<<"Enter Source string: "<<endl;
    cin.getline(Arr, 30);

    strcatX(Brr, Arr);

    cout<<"Destination string is: "<<Brr<<endl;

    
    return 0;
}