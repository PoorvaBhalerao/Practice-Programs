//Write a recursive program which accept number from user 
//and return smallest digit of that number.
//Input: 879
//Output:  7

#include<iostream>
using namespace std;

int Min(int iNo)
{
    int iDigit = 0, iSmall = 0;

    if(iNo < 10)
    {
        return iNo;
    }    
    
    iDigit = iNo % 10;
    iSmall = Min(iNo /10);

    if(iSmall < iDigit)
    {
        return iSmall;
    }
    else
    {
        return iDigit;
    }
    
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = Min(iValue);

    cout<<"smallest digit of number is: "<<iRet<<endl;

    return 0;
}