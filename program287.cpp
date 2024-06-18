// Write a program which accept one number and 
//count no of digits of number using iteration

#include<iostream>
using namespace std;

int count(int iNo)
{
    int iCnt= 0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo/10;
    } 
    return iCnt;     
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = count(iValue);

    cout<<"Count of digits are: "<<iRet<<endl;

    return 0;
}