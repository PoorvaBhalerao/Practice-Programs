// accept two numbers and swap the contents of variable
#include<iostream>
using namespace std;

void Swap(int &A, int &B)       // '&' operator indicates reference
                                //call by reference
{
    int temp;
    temp = A;
    A = B;
    B = temp;
}


int main()
{
    int Value1 = 10, Value2 = 20;

    cout<<"Value of Value1 variable is: "<<Value1<<"\n";
    cout<<"Value of Value2 variable is: "<<Value2<<"\n";
    
    Swap(Value1, Value2);

    cout<<"Value of Value1 variable after swapping is: "<<Value1<<"\n";
    cout<<"Value of Value2 variable after swapping is: "<<Value2<<"\n";

    return 0;
}
