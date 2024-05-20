//Write a program which accept area in square feet and convert it into square meter
//(1 square feet = 0.0929 square meter)
//Input:    5
//Output:   0.464515
#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;
    dSqMeter = 0.0929 * iValue;
    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter is %lf",dRet);
    return 0;
}