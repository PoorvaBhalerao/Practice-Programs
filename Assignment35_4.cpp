//Write a recursive program which accept a number from user 
//and return its factorial.
//Input: 5
//Output:  120

#include<iostream>
using namespace std;

// int Fact(int iNo)
// {
//     int iFact = 1;
    
//     if(iNo < 1)
//     {
//         cout<<"Invalid input.Please enter positive numbers"<<endl;
//         return -1;
//     }

//     while(iNo != 0)
//     {
//         iFact = iFact * iNo;
//         iNo--;
//     }
//     return iFact;
// }

int Fact(int iNo)
{
    static int iFact = 1;
    
    if(iNo < 1)
    {
        cout<<"Invalid input.Please enter positive numbers"<<endl;
        return -1;
    }

    if(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;
    
    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    iRet = Fact(iValue);

    cout<<"Factorial of "<<iValue<<" is: "<<iRet<<endl;

    return 0;
}