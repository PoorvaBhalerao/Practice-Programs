//Accept string from user and count small letters of string using recursion.

#include<iostream>
using namespace std;

int CountSmall(char *str)
{
    static int iCount = 0;
    
    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        CountSmall(str);
    }    
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string: "<<endl;
    cin.getline(Arr, 30);

    iRet = CountSmall(Arr);

    cout<<"Count of Small letters of given string is: "<<iRet<<endl;

    return 0;
}