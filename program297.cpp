// Write a program accept number fro user and display all factors of that number.
//using Recursion

#include<iostream>
using namespace std;
void DisplayFactors(int iNo)
{
    static int i = 1;

    if(i <= (iNo/2))
    {
        if(iNo % i == 0)
        {
            cout<<i<<endl;
        }
        i++;
        DisplayFactors(iNo);
    }    
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}