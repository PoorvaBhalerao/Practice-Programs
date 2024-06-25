//Write a recursive program which accept number from user 
//and return Largest digit of that number.
//Input: 879
//Output:  9

#include<iostream>
using namespace std;

int Max(int iNo)
{
    static int iMax = 0;
    int iDigit = 0;
    if(iNo > 0)
    {   
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo /10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = Max(iValue);

    cout<<"Largest digit of number is: "<<iRet<<endl;

    return 0;
}