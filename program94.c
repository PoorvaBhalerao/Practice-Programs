/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    int i = 0;
    for(i = 1; i<=3; i++)
    {
        for(iCnt = 1; iCnt<= 4; iCnt++)
        {
            printf("*\t");
        }
        printf("\n");
    }    
}


int main()
{
    Display();

    return 0;
}