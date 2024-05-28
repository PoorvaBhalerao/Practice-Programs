// Write a program to accept N elements from user (dynamically)
// and count even elements
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)  
{
    int i = 0, iCnt = 0; 
    
    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iCnt++;
        }           
    }
    return iCnt;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want: \n");   
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));   

    printf("Enter the elements:\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = CountEven(Brr, iCount);       

    printf("Count of Even elements is: %d", iRet);

    free(Brr); 

    return 0;
}
