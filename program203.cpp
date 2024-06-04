//Write a program to return Addition of factors of number

#include<iostream>
using namespace std;

int SunFactors(int iNo)
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue;

    iRet = SunFactors(iValue);

    cout<<"Summation of Factors is: "<<iRet<<endl;

    return 0;

}