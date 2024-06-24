//Write a recursive program which accept string from user 
//and count number of characters.
//Input: India is my Country.
//Output:  20

#include<iostream>
using namespace std;

// int strlenX(char *str)
// {
//     int iCount = 0;
    
//     while(*str != '\0')
//     {
//         iCount++;
//         str++;
//     }
//     return iCount;
// }

int strlenX(char *str)
{
    static int iCount = 0;
    
    if(*str != '\0')
    {
        iCount++;
        str++;
        strlenX(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char Arr[50];

    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    iRet = strlenX(Arr);

    cout<<"Count of characters in string are: "<<iRet<<endl;

    return 0;
}