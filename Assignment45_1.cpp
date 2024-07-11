//Write generic program which accept one value and one number from user and Print that value that number of times on screen.
// Input: M    7
// Output: M   M   M   M   M   M   M

#include<iostream>
using namespace std;

template <class T>
void Display(T Value, int iSize)
{
    int i = 0;
    for(i = 0; i< iSize; i++)
    {
        cout<<Value<<"\t";
    }
    cout<<endl;
}


int main()
{
    Display('M', 7);

    Display(11, 3);

    Display(3.7, 6);

    return 0;
}