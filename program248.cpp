//Accept string and display length of string using inuilt function

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char Arr[30] = "Hello World";
    int iRet = 0;

    
    iRet = strlen(Arr);

    cout<<"Length of string is: "<<iRet<<endl;

    return 0;
}