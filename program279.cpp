//Write a program accept no from user using while 
//which display no to 1(reverse order) on screen.

#include<iostream>
using namespace std;

void Display(int iNo)
{      
    int i = iNo;
    while(i >0)
    {
        cout<<i<<endl;
        i--;        
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