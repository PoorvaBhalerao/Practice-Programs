//Write a recursive program which display below pattern
//Output:   5   4   3   2   1   

#include<iostream>
using namespace std;

// void Display()
// {
//     int i =5;
//     while(i>0)
//     {
//         cout<<i<<"\t";
//         i--;
//     }
// }

void Display()
{
    static int i =5;
    if(i>0)
    {
        cout<<i<<"\t";
        i--;
        Display();
    }
}


int main()
{
    Display();

    return 0;
}
