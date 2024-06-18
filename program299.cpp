//Accept string from user and display length of string using while loop.

#include<iostream>
using namespace std;

int strlenX(char *str)
{
    int length = 0;
    while(*str != '\0')
    {
        length++;
        str++;
    }    
    return length;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string: "<<endl;
    cin.getline(Arr, 30);

    cout<<"Entered string is: "<<Arr<<endl;

    iRet = strlenX(Arr);

    cout<<"Length of given string is: "<<iRet<<endl;

    return 0;
}