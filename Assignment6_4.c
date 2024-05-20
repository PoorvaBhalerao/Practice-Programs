//Write a program which accept number from user abd display its table
// Input: 2
// Output: 2   4   6   8   10  12  14  16  18  20

#include<stdio.h>

void Table(int iNo)
{   
    int i =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i<=10; i++)
    {
        printf("%d\t",i*iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Table(iValue);

    
    return 0;
}
