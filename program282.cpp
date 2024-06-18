// Write a program which accept one number and display addition of numbers from 1 to that number using iteration

#include<iostream>
using namespace std;

// int Addition(int iNo)
// {      
//     int iSum = 0;
//     while(iNo >= 1)
//     {
//         iSum = iSum + iNo;
//         iNo--;        
//     }
//     return iSum;
// }

// OR
int Addition(int iNo)
{      
    int iSum = 0;
    while(iNo >= 1)
    {
        iSum = iSum + iNo;
        iNo--;        
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = Addition(iValue);

    cout<<"Addition is "<<iRet<<endl;

    return 0;
}