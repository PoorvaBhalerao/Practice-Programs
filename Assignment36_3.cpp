//Write a recursive program which accept string from user and
// count number of small characters.
//Input: Hello World.
//Output: 8
#include<iostream>
using namespace std;

int Countsmall(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        Countsmall(str);
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    iRet = Countsmall(Arr);

    cout<<"Count of small characters in string are: "<<iRet<<endl;
}