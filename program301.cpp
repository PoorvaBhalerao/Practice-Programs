//Accept string from user and display length of string using recursion.

#include<iostream>
using namespace std;

int strlenX(char *str)
{
    static int length = 0;
    
    if(*str != '\0')
    {
        length++;
        str++;
        strlenX(str);
    }    
    return length;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string: "<<endl;
    cin.getline(Arr, 30);

    iRet = strlenX(Arr);

    cout<<"Length of given string is: "<<iRet<<endl;

    return 0;
}