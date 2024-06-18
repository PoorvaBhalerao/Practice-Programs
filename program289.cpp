//Accept no from user and display sum of its digits using iteration.

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    int iSum= 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    } 
    return iSum;     
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = SumDigits(iValue);

    cout<<"Sum of digits is: "<<iRet<<endl;

    return 0;
}