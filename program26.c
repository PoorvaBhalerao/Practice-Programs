// Write a program to display 1 to 4 on screen
#include<stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=4 ; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    Display();

    return 0;
}