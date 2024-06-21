//Write a recursive program which Accept number from user and display below pattern
//Input:    6
//Output:   A   B   C   D   E   F

#include<iostream>
using namespace std;

// void Display(int iNo)
// {
//     char ch = 'A';
//     while(iNo >0)
//     {
//         cout<<ch<<"\t";
//         iNo--;
//         ch++;
//     }
// }

void Display(int iNo)
{
    static char ch = 'A';
    if(iNo > 0)
    {
        cout<<ch<<"\t";
        iNo--;
        ch++;
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
