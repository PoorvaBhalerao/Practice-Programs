// Write a generic program to find largest number from three numbers.
#include<iostream>
using namespace std;

template <class T>
T Largest(T No1, T No2, T No3)
{
    T Max = No1;
    if(No2 > Max)
    {
        Max = No2;
    }
    
    if(No3 > Max)
    {
        Max = No3;
    }

    return Max;
}

int main()
{
    int Ret = 0;
    int Value1, Value2, Value3;

    cout<<"Enter first number: ";
    cin>>Value1;

    cout<<"Enter first number: ";
    cin>>Value2;

    cout<<"Enter first number: ";
    cin>>Value3;

    Ret = Largest(Value1, Value2, Value3);

    cout<<"Largest number is: "<<Ret<<endl;

    float fRet = 0;
    float fValue1, fValue2, fValue3;

    cout<<"Enter first number: ";
    cin>>fValue1;

    cout<<"Enter first number: ";
    cin>>fValue2;

    cout<<"Enter first number: ";
    cin>>fValue3;

    fRet = Largest(fValue1, fValue2, fValue3);

    cout<<"Largest number is: "<<fRet<<endl;


    return 0;
}