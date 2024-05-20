// Accept number from user and check whether that number is prime or not
// using break keyword to avoid loop iterations for numbers which are not prime

/*
    Accept number as No
    check if it is divided by any number expect 1
    If division is not 0.
    then Display as No is Prime Number
    otherwise Display as No is not a Prime Number.
*/
#include<stdio.h>
#include<stdbool.h>


bool CheckPrime(int iNo)
{
    int iCnt = 0; 
    int iCount = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo %iCnt) == 0)
        {
            iCount++;
            break;      //prime number nsel tar fayda hoil break mule
        }
    }
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
   
    
    // for(iCnt = 2; iCnt< iNo ; iCnt++)
    // {
    //     if(iNo % iCnt == 0)
    //     {
    //         return false;
    //     }
    //     else
    //     {
    //         return true;
    //     }
    // }  

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