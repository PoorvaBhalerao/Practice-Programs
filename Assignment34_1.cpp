//Write a recursive program which Accept number from user and display below pattern
//Input:    6
//Output: *   *   *   *   *   *

#include<iostream>
using namespace std;

// void Display(int iNo)
// {
//     int i =1;
//     while(i<=iNo)
//     {
//         cout<<"*\t";
//         i++;
//     }
// }

void Display(int iNo)
{
    static int i =1;
    if(i<=iNo)
    {
        cout<<"*\t";
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter a number: "<<endl;
    cin>>iValue; 

    Display(iValue);

    return 0;
}
