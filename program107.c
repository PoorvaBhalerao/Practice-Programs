/*iRow = 4, iCol = 4        //using filter

#   
#   #
#   #   #
#   #   #   #  
*/

#include<stdio.h>

void Display(int iRow, int iCols)
{
    int j = 0;
    int i = 0;

    if(iRow != iCols)        //Filter
    {
        printf("Number of rows and number of columns should be same");
        return;
    }
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCols; j++)
        {
            if(i >= j)      //Lower triangle
            {
                printf("#\t");
            }
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