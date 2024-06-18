//Write a program which display 4 times * on screen.
//Approach 3 using recursion using static storage class
#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;       

    if(i <= iNo)
    {
        cout<<"*"<<endl;
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number of times you want to display * on screen: "<<endl;
    cin>>iValue;

    Display(iValue);

    cout<<"End of Application";

    return 0;
}