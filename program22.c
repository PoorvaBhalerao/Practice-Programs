// Write a program to display 5 times "Jay Hanuman" on screen
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iValue ; iCnt++)
    {
        printf("Jay Hanuman...\n");
    }
}

int main()
{
    int iNo = 0;
    
    printf("Enter number of times for which you want to display jay hanuman on screen: ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}