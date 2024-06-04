// Accept no from user and return difference between summation of even digits and odd digits.

#include<iostream>
using namespace std;

int SumDifference(int iNo)
{
    int iSumE = 0, iSumO = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2)== 0)
        {
            iSumE = iSumE + iDigit;
        }
        else
        {
            iSumO = iSumO + iDigit;
        }
        iNo = iNo /10;
    }
    return iSumE-iSumO;
}


int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    iRet = SumDifference(iValue);

    cout<<"Difference between summation of even and odd digits is: "<<iRet<<endl;

    return 0;
}

