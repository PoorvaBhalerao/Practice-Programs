// write a program to accept number from user and return its factorial
// usage of datatype modifier long

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0; 
    long int iFact = 1;     // because if greater number is there so integer will not able to store that number
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
        
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    long int iRet = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

  
    printf("Factorial of entered number is:%ld\n ",iRet);
   

    return 0;
}