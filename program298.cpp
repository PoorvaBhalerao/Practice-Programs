// Write a program accept number from user and 
//display addition all factors of that number.
//using Recursion

#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    static int i = 1;
    static int iSum = 0;

    if(i <= (iNo/2))
    {
        if(iNo % i == 0)
        {
            iSum = iSum + i;
        }
        i++;
        SumFactors(iNo);
    }    
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = SumFactors(iValue);

    cout<<"Addition of factors of number is: "<<iRet<<endl;

    return 0;
}