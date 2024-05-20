// Write a program which accpets one number from user and print that number of even numbers on screen
//Input:  7
//Output: 2   4   6   8   10  12  14
#include<stdio.h>

void PrintEven(int iNo)
{
    int i = 0;
    int iCnt = 0;
    
    i = 2;
    if(iNo <= 0)
    {
        return;
    }
    
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if(i%2 == 0)
        {
            printf("%d\t",i);
        }
        i = i+ 2;
    }
}   
    

int main()
{
    int iValue = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}