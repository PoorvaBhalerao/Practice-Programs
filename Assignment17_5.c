//Accept number of rows and columns from user and display below pattern
// Input:  iRow:4  iCol:4
// Output: 1    2   3   4
//              2   3   4
//                  3   4                                
//                      4


#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Please enter same number for rows and columns");
        return;
    }
    for(i = 1; i<=iRow; i++)
    {
        for(j =1; j<=iCol; j++)
        {
            if(i>j)
            {
                printf(" \t");
            }
            else
            {
                printf("%d\t",j);
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
    scanf("%d",&iValue1);

    printf("Enter number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}