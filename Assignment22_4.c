// Accept N numbers from user and display all such numbers which contains 3 digits in it.
// Input:  N:  6
// Elements:  8225    665  3   76  953 858
// Output: 665  953 858
#include<stdio.h>
#include<stdlib.h>


void Digits(int Arr[], int iLength)
{
    int i = 0;
    for(i = 0; i<iLength; i++)
    {
        if((Arr[i]>99) && (Arr[i]<1000))
        {
            printf("%d\t",Arr[i]);
        }
    }   
    
}

int main()
{
    int iCnt = 0, iSize = 0;
    
    int *p = NULL;

    printf("Enter number of elements you want: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}