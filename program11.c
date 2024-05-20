// Write a program which accepts a number from user and check whether it is between 30 and 50 then print yes otherwise Display no
#include<stdio.h>
#include<stdbool.h>

/*
    START
        Accept one number as No
        If it is greater than 30 and less than 50
        then display the messege number is in range
        otherwise
        display the messege as number is not in range
    STOP
*/

bool CheckRange(int iNo)
{
    if((iNo>=30) && (iNo<=50))
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
    bool bRet = false;

    printf("Enter a Number: ");
    scanf("%d", &iValue);
   

    bRet = CheckRange(iValue);

    if(bRet == true)
    {
        printf("%d is in range 30 to 50\n",iValue);
    }
    else
    {
        printf("%d is not in range 30 to 50\n",iValue);
    }

    return 0;
}