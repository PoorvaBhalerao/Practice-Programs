// write a program to accept number from user and return its factorial

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0; 
    int iFact = 1;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
        
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

  
    printf("Factorial of entered number is:%d\n ",iRet);
   

    return 0;
}