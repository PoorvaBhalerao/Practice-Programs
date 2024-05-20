// Write a program to ask user how many nos from 1 he want to display on screen
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1; 
    while(iCnt<=iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter how many numbers you want to display on screen: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}