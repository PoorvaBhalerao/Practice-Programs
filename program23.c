// Write a program to display 5 times "Jay Hanuman" on screen
#include<stdio.h>

void Display()
{
   int iCnt = 0;

   iCnt = 1;
   while(iCnt<=5)
   {
        printf("Jay Hanuman...\n");
        iCnt++;
   }
}

int main()
{
    Display();

    return 0;
}