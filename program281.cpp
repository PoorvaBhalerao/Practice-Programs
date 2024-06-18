//Write a program accept no from user using recursion
//which display no to 1(reverse order) on screen.

#include<iostream>
using namespace std;

void Display(int iNo)
{      
    static int i = iNo;
    if(i >= 1)
    {
        cout<<i<<endl;
        i--;  
        Display(iNo);      
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    Display(iValue);

    cout<<"End of Application";

    return 0;
}