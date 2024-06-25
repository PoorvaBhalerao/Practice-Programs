//Write a recursive program which accept string from user and
// count white spaces.
//Input: He llo Wor ld.
//Output: 3
#include<iostream>
using namespace std;

int whitespaces(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        whitespaces(str);
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    iRet = whitespaces(Arr);

    cout<<"Count of white spaces in string are: "<<iRet<<endl;
}