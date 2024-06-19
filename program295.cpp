// Write a program accept number from user and 
//display all factors of that number.
//using iteration(for loop)

#include<iostream>
using namespace std;
void DisplayFactors(int iNo)
{
    int i;

    for(i = 1; i <= (iNo/2); i++)
    {
        if(iNo % i == 0)
        {
            cout<<i<<endl;
        }
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