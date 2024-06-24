//Write a recursive program which accept number from user 
//and display summation of its digits.
//Input: 879
//Output:  24

#include<iostream>
using namespace std;

// int DisplaySum(int iNo)
// {
//     int iSum = 0;
//     int iDigit = 0;
//     while(iNo != 0)
//     {
//         iDigit = iNo % 10;
//         iSum = iSum + iDigit;
//         iNo = iNo /10;
//     }
//     return iSum;
// }

int DisplaySum(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo /10;
        Display(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = DisplaySum(iValue);

    cout<<"Summation of digits of number is: "<<iRet<<endl;

    return 0;
}