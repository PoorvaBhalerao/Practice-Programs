//Accpet string from user that string contains data and copy the contents into another empty string.
//Using inBuilt function strcpy()
#include<iostream>
#include<string.h>
using namespace std;

int main()
{

    char Arr[30] = "Hello World";
    char Brr[30];
    int iRet = 0;

    strcpy(Brr, Arr);    

    cout<<"Destination string : "<<Brr<<endl;

    return 0;
}