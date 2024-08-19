//problems on generic programming
//Addition of two numbers   (Specific programming)

#include<iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

// float Addition(float No1, float No2)
// {
//     float Ans;
//     Ans = No1 + No2;
//     return Ans;
// }

// float Addition(float No1, float No2)
// {
//     float Ans;
//     Ans = No1 + No2;
//     return Ans;
// }

int main()
{
    double Value1 = 10.72, Value2 = 11.5;
    double Ret = 0.0;

    Ret = Addition(Value1, Value2);

    cout<<"Addition is: "<<Ret<<endl;

    return 0;
}