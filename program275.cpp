//Write a program using recursion which display 4 times * on screen.

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
    cout<<"End of Display"<<endl;
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