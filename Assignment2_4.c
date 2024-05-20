// Accpect two numbers from user and display firrst number in second number of times.
// Input 12 5
//output 12 12  12  12  12

#include<stdio.h>
void Display(int iNo, int iFrequency)
{
    int i = 0;
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    for(i = 0; i< iFrequency; i++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    printf("Enter frequency: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}

