// Write a program which accepts range from user and display all even numbers in between that range
//Input: 23 35
//Output:24   26   28   30   32   34   
//Input: -10    2
//Output -10    -8    -6    -4    -2    0     2

#include<stdio.h>
void RangeDisplayEven(int iStart, int iEnd)
{
    int i = 0;
    for(i = iStart; i<=iEnd; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}