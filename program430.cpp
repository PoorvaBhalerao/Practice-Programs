// accept two variables with some content and swap the contents of variable
//generic programming 

#include<iostream>
using namespace std;

template <class T>
void Swap(T &A, T &B)       // '&' operator indicates reference
                                //call by reference
{
    T temp;
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
