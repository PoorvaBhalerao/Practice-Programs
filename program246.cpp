//Accept string and display length of string using user defined function

#include<iostream>
using namespace std;

int strlenX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{

    char Arr[30];
    int iRet = 0;

    cout<<"Enter you name: "<<endl;
    cin.getline(Arr, 30);              // Accepts multi word string

    iRet = strlenX(Arr);

    cout<<"Length of string is: "<<iRet<<endl;

    return 0;
}