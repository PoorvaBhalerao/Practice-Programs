// Accept number of rows and columns from user and display below pattern
//  Input:  iRow:6  iCol:6
//  Output: 1   2   3   4   5
//          1   2           5
//          1       3       5
//          1           4   5
//          1   2   3   4   5


#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, k = 0;
    if (iRow != iCol)
    {
        printf("Please enter same number for rows and columns");
        return;
    }
    
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if((i==1) || (j==1) || (i==iRow) || (j==iCol))      
            {
                printf("%d\t",j);
            }
            else
            {
                if(i==j)
                {
                    printf("%d\t",j);
                }
                else
                {
                    printf(" \t");
                }
            }
        }
        printf("\n");
       
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:");
    scanf("%d", &iValue1);

    printf("Enter number of columns:");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}