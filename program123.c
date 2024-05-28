// Write a program to accept size of array and elements from user (dynamically)
// and return addittion of all elements of array
#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)  
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
    int iCount = 0, i = 0, iRet = 0;;
    int *Brr = NULL;

    printf("Enter number of elements that you want: \n");   //4
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));   //allocate (4*4) 16 bytes of memory to Brr

    printf("Enter the elements:\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Addition(Brr, iCount);       //Addition(100(imaginary address), 4)
    printf("Addition is: %d", iRet);

    free(Brr);  // free(100)

    return 0;
}
