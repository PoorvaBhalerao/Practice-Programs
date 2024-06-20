//Write a recursive program which display below pattern
//Output:   A   B   C   D   E   F

#include<iostream>
using namespace std;

// void Display()
// {
//     char ch ='A';
    
//     while(ch <= 'F')
//     {
//         cout<<ch<<"\t";
//         ch++;
//     }
// }

void Display()
{
    static char ch ='A';
    if(ch <= 'F')
    {
        cout<<ch<<"\t";
        ch++;
        Display();
    }
}


int main()
{
    Display();

    return 0;
}
