//Write a recursive program which accept number from user 
//and return its reverse number.
//Input: 879
//Output:  978

#include<iostream>
using namespace std;

int Reverse(int iNo, int reversedNum) 
{
    int iDigit = 0, iRev = 0;
    
    if(iNo == 0)
    {
        return reversedNum;
    }
    
    iDigit = iNo % 10;
    reversedNum = reversedNum * 10 + iDigit;
    iRev = Reverse(iNo/10, reversedNum);
    
    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet = Reverse(iValue,0);

    cout<<"Reversed number is: "<<iRet<<endl;

    return 0;
}