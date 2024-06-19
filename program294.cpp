//Accept no from user and 
//display sum of its digits using iteration as well as recursion.

#include<iostream>
using namespace std;

int SumDigitsI(int iNo)
{
    int iSum= 0;
    //int iDigit = 0;

    while(iNo != 0)
    {
        //iDigit = iNo % 10;
        iSum = iSum + (iNo % 10);
        iNo = iNo/10;
        
    } 
    return iSum;     
}

int SumDigitsR(int iNo)
{
    static int iSum= 0;
    //int iDigit = 0;

    if(iNo != 0)
    {
        //iDigit = iNo % 10;
        iSum = iSum + (iNo % 10);
        //iNo = iNo/10;
        SumDigitsR(iNo / 10);
    } 
    return iSum;     
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = SumDigitsI(iValue);

    cout<<"Sum of digits using iteration is: "<<iRet<<endl;

    iRet = SumDigitsR(iValue);

    cout<<"Sum of digits using recursion is: "<<iRet<<endl;

    return 0;
}