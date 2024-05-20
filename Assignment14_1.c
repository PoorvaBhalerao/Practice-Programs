//Accept number of rows and number of columns from user display below pattern
//Input:    iRow = 4    iCol = 4
//Output:A  B   C   D
//       A  B   C   D
//       A  B   C   D
//       A  B   C   D
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch = 'A';
    int i = 0 , j = 0;
    for(i = 1; i <= iRow; i++)
    {
        ch = 'A';
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
            ch++;
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