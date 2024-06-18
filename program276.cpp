//Write a program accept no from user using while which display  1 to no on screen.

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i = 1;       

    while(i <= iNo)
    {
        cout<<i<<endl;
        i++;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    Display(iValue);

    cout<<"End of Application";

    return 0;
}