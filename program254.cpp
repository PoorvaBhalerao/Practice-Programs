//Accpet string from user that string contains data 
//and concatenate to another string which contains existing data.
//Using Inbuilt function


#include<iostream>
#include<string.h>
using namespace std;



int main()
{
    char Arr[30] = "Hello World";
    char Brr[30] = "India";

    strcat(Brr, Arr);

    cout<<"Destination string is: "<<Brr<<endl;

    
    return 0;
}