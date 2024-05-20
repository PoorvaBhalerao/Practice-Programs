//Write a program which accept temperature in Fahrenheit and convert it into celcius.
//(1 celcius = ((Fahrenheit - 32) * (5/9))
//Input:    10
//Output:   -12.2222    (10-32)*(5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double i = 0.0;
    double celcius = 0.0;
    i = fTemp - 32;
    celcius = i * 0.5555;
    return celcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fshrenheit: ");
    scanf("%f",&fValue);

    dRet =FhtoCs(fValue);

    printf("Temperature in celcius is %lf",dRet);

    return 0;
}