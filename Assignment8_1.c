//Write a program which accepts radius of circle from user and calculate its area.
//Consider value of PI as 3.14
// Input:  5.3
// Output: 88.2026
#include<stdio.h>

double CircleArea(float fNo)
{
    float Pi = 3.14;
    double Area = 0.0;
    Area = Pi * fNo * fNo;
    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter number: ");
    scanf("%f",&fValue);

    dRet =CircleArea(fValue);

    printf("Area of Circle is %lf",dRet);
    
    return 0;
}
