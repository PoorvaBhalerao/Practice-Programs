//problems on generic programming
//Addition of two numbers   (generic programing)

#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1+No2;
    return Ans;
}

int main()
{
    int iValue1 = 10, iValue2 = 11;
    int iRet = 0;

    float Value1 = 10.0f, Value2 = 11.5f;
    float Ret = 0.0f;

    double dValue1 = 10.12, dValue2 = 11.12;
    double dRet = 0.0;

    iRet = Addition(iValue1, iValue2);
    cout<<"Addition of integer is: "<<iRet<<endl;

    Ret = Addition(Value1, Value2);
    cout<<"Addition of float is: "<<Ret<<endl;

    dRet = Addition(dValue1, dValue2);
    cout<<"Addition of double is: "<<dRet<<endl;

    return 0;
}