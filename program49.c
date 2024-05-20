// write a program to accept number from user and return its factorial
// usage of datatype modifier unsigned long
//using while loop

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0; 
    unsigned long int iFact = 1;     // unsigned because factorial is always positive
    
    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;        
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