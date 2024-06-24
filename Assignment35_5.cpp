//Write a recursive program which accept number from user 
//and display product of its digits.
//Input: 235
//Output:  30

#include<iostream>
using namespace std;

// int DisplayProd(int iNo)
// {
//     int iProd = 0;
//     int iDigit = 0;
//     while(iNo != 0)
//     {
//         iDigit = iNo % 10;
//         iProd = iProd * iDigit;
//         iNo = iNo /10;
//     }
//     return iProd;
// }

int DisplayProd(int iNo)
{
    static int iProd = 1;
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = iProd * iDigit;
        iNo = iNo /10;
        DisplayProd(iNo);
    }
    return iProd;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = DisplayProd(iValue);

    cout<<"Product of digits of number is: "<<iRet<<endl;

    return 0;
}