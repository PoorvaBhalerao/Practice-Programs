//Write a program which display 4 times * on screen.
//Approach 3 using recursion
#include<iostream>
using namespace std;

void Display()
{
    int i = 1;       // Storage class is by default 'auto'
                     // Scope: function block
                     // Lifetime: block

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

//Program run infinitely