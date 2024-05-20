// write a program to accept number from user and return its factorial
// usage of datatype modifier unsigned long

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0; 
    unsigned long int iFact = 1;     // because factorial is always positive
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
        
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

  
    printf("Factorial of entered number is:%lu\n ",iRet);
   

    return 0;
}