//Accept number of rows and number of columns from user and display below pattern
//Input:    iRow = 4    iCol = 4
// Output: A   B   C   D
//         a   b   c   d
//         A   B   C   D
//         a   b   c   d
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch = 'A',ch1 = 'a';
    int i = 0 , j = 0;
    for(i = 1; i <= iRow; i++)
    {
        ch = 'A';
        ch1 ='a';
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%c\t",ch1);
                ch1++;
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