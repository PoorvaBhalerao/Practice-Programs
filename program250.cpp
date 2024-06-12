//Accpet string from user that string contains data and copy the contents into another empty string.
//Using User defined fucntion
#include<iostream>
using namespace std;

void strcpyX(char *Src, char *Dest)
{
    //char temp;
    while(*Src != '\0')
    {
        //temp = *Src;
        //*Dest = temp;
        *Dest = *Src;
        Src++;
        Dest++;          
    }

    *Dest = '\0';       
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter Source String: "<<endl;
    cin.getline(Arr, 30);

    strcpyX(Arr, Brr);      

    cout<<"Destination string is: "<<Brr<<endl;

    return 0;
}