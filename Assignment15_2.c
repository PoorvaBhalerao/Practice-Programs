// Accept number of rows and number of columns from user and dsplay below pattern
//Input:iRow = 4    iCol = 4
//Output:2  4   6   8   10
//       1  3   5   7   9
//       2  4   6   8   10
//       1  3   5   7   9



#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 1;
    int iCnt1 = 2;
    int i = 0 , j = 0;
    for(i = 1; i<=iRow; i++)
    {        
        for(j = 1; j <= iCol;j++)
        {
            if(i%2 == 0)
            {
                printf("%d\t",iCnt);
                iCnt = iCnt +2;
            }
            else
            {   
                printf("%d\t",iCnt1);
                iCnt1 = iCnt1 + 2;
            }
            
        } 
        iCnt = 1;
        iCnt1 = 2;        
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