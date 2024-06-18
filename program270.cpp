//Write a program  which display 4 times * on screen.
//Approach 2 using while loop
#include<iostream>
using namespace std;

void Display()
{
    int i = 0;
    i = 1;
    while(i <= 4)
    {
        cout<<"*\n"<<endl;
        i++;
    }
}

int main()
{
    Display();

    return 0;
}