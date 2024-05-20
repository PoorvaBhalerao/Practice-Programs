// Accept number from user and check whether that number is prime or not
// using break keyword to avoid loop iterations for numbers which are not prime
// without using flag concept

// Input: 11    No/2: 5     iCnt = 6
//Input: 10     No/2: 5     iCnt = 2
#include<stdio.h>
#include<stdbool.h>


bool CheckPrime(int iNo)
{
    int iCnt = 0; 
    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo %iCnt) == 0)
        {
            break;      //prime number nsel tar fayda hoil break mule
        }
    }

    if(iCnt > (iNo/2))
    {
        return true;
    }
    else
    {
        return false;
    }    
}


int main()
{
    int iValue = 0;
    bool iRet = false;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet = CheckPrime(iValue);

    if(iRet == true)
    {
        printf("%d is a prime number.",iValue);
    }
    else
    {
        printf("%d is not a prime number.",iValue);
    }

    return 0;
}