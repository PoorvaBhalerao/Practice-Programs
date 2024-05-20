//Write a program which accepts N and print first 5 nultiples of N
// Input:  4
// Output: 4   8   12  16  20
#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int i = 0, iMult = 0;
    for(i = 1; i<=5; i++)
    {
        iMult = iNo * i;
        printf("%d\t",iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;

}