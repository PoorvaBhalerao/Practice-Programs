/*
1   2   3   4
1   2   3   4   
1   2   3   4
*/
#include<stdio.h>

void Display(int iRow, int iCols)
{
    int j = 0;
    int i = 0;
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<= iCols; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }    
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:");
    scanf("%d",&iValue1);

    printf("Enter number of columns:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}