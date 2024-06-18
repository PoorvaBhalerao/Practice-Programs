// Write a program accept number fro user and display all factors of that number.
//using iteration(while loop)

#include<iostream>
using namespace std;
void DisplayFactors(int iNo)
{
    int i = 1;

    while(i <= (iNo/2))
    {
        if(iNo % i == 0)
        {
            cout<<i<<endl;
        }
        i++;
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