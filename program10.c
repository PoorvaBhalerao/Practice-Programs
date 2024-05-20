// Write a program which accepts a number from user and check whether it is between 30 and 50 then print yes otherwise Display no

#include<stdio.h>
#include<stdbool.h>

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
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}