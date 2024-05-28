// Accept N numbers from user and  Return Largest number.
// Input:  N:  6
// Elements:  85    66  3   66  193 88
// Output: 193
#include<stdio.h>
#include<stdlib.h>


int LargestNum(int Arr[], int iLength)
{
    int i = 0, iMax= 0;

    for(i = 0; i<iLength; i++)
    {   
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }   
    }
    return iMax;
}

int main()
{
    int iCnt = 0, iSize = 0;
    int iRet = 0;
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

    iRet = LargestNum(p, iSize);

    printf("Largest number is: %d", iRet);
    free(p);

    return 0;
}