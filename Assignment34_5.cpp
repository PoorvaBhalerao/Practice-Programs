//Write a recursive program which Accept number from user and display below pattern
//Input:    7
//Output:   a   b   c   d   e   f   g

#include<iostream>
using namespace std;

// void Display(int iNo)
// {
//     char ch = 'a';
//     while(iNo >0)
//     {
//         cout<<ch<<"\t";
//         iNo--;
//         ch++;
//     }
// }

void Display(int iNo)
{
    static char ch = 'a';
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
