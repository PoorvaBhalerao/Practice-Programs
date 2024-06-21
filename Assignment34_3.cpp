//Write a recursive program which Accept number from user and display below pattern
//Input:    6
//Output:   6   5   4   3   2   1

#include<iostream>
using namespace std;

// void Display(int iNo)
// {
    
//     while(iNo >0)
//     {
//         cout<<iNo<<"\t";
//         iNo--;
//     }
// }

void Display(int iNo)
{
    if(iNo > 0)
    {
        cout<<iNo<<"\t";
        iNo--;
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
