//Write a program which accpets N from user and print all odd numbers upto N
//Input: 18
//Output:   1   3   5   7   9   11  13  15  17
#include<stdio.h>
void OddDisplay(int iNo)
{
    int i = 0;
    for(i = 1; i<=iNo; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}