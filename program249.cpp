//Accpet string that string contains data and copy the contents into another empty string.
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
        Dest++;          // here Dest pointer is already at next empty location
    }

    *Dest = '\0';       //because all data is copied except '\0' so it is explicitly defined
}

int main()
{
    char Arr[30] = "Hello World";
    char Brr[30];

    strcpyX(Arr, Brr);      // strcpy(100, 200)..imaginary addr

    cout<<"Copied string is: "<<Brr<<endl;

    return 0;
}