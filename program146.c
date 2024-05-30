// Accept N numbers from user and display array of numbers in reverse order(in function only)

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;
    printf("Elements in reverse order are:\n");
    for(i = iLength-1 ; i>=0 ; i--)
    {
        printf("%d\n",Arr[i]);
    }

}

int main()
{
    int iCnt = 0,iSize = 0;
    int *p = NULL;

    printf("Enter Number of elements you want: ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p, iSize);      //here we send address so below data is updated 

    free(p);

    return 0;
}