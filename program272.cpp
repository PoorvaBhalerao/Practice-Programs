//Write a program which display 4 times * on screen.
//Approach 3 using recursion using static storage class
#include<iostream>
using namespace std;

void Display()
{
    static int i = 1;       

    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}