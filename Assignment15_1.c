// Accept number of rows and number of columns from user and dsplay below pattern
//Input:iRow = 3    iCol = 4
//Output:1  2   3   4
//       5  6   7   8
//       9  1   2   3


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 1;
    int i = 0 , j = 0;
    for(i = iRow; i >= 1; i--)
    {        
        for(j = 1; j <= iCol;j++)
        {
            printf("%d\t",iCnt);
            if(iCnt<9)
            {
                iCnt++;
            }
            else
            {   
                iCnt = 1;
            }
        } 
        
        printf("\n");
    }
    printf("\n");
      
}
    

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter number of columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}