// Accept number from user and check whether that number is perfect or not
// perfect number is number whos factors addition is that number only. E.g 6,28
// using Filter

/*
    Accept number as No
    Search its factors
    Perform addition of all the factors
    If addition is same as No
    then Display as No is perfect Number
    otherwise Display as No is not a Perfect Number.
*/
#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     //Filter
    {
        printf("Please enter positive numbers only\n");
        return false;
    }

    for(iCnt = 1; iCnt<= (iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
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

    iRet = CheckPerfect(iValue);

    if(iRet == true)
    {
        printf("%d is a perfect number.",iValue);
    }
    else
    {
        printf("%d is not a perfect number.",iValue);
    }

    return 0;
}