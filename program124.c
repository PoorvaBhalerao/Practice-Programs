//Template 
#include<stdio.h>
#include<stdlib.h>

___ ______(int Arr[], int iSize)  
{
    int i = 0, iSum = 0;
    for(i = 0; i<iSize; i++)
    {
        iSum = iSum + Arr[i];           
    }
    return iSum;
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

    iRet = ______(Brr, iCount);       

    free(Brr); 

    return 0;
}
