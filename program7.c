// Accept two number and display its addition

#include<stdio.h>

float Addition(float fNo1,float fNo2)   // First input and second input
{
    float fAns = 0.0;           // Variable to store result
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0;        // Variable to store first input
    float fValue2 = 0.0;        // Variable to store Second input
    float fResult = 0.0;        // Variable to store return value

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1, fValue2);

    printf("Addition is : %f\n",fResult);
    
    return 0;
}

