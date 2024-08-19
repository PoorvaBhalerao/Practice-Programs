// accept two characters and swap the contents of variable
#include<iostream>
using namespace std;

void Swap(char &A, char &B)       // '&' operator indicates reference
                                //call by reference
{
    char temp;
    temp = A;
    A = B;
    B = temp;
}


int main()
{
    char Value1 = 'a', Value2 = 'b';

    cout<<"Value of Value1 variable is: "<<Value1<<"\n";
    cout<<"Value of Value2 variable is: "<<Value2<<"\n";
    
    Swap(Value1, Value2);

    cout<<"Value of Value1 variable after swapping is: "<<Value1<<"\n";
    cout<<"Value of Value2 variable after swapping is: "<<Value2<<"\n";

    return 0;
}
