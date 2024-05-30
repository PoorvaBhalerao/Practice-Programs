// Accept N numbers from user and display Smallest number from N numbers

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int i = 0;
    int iMin = Arr[0];

    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iCnt = 0, iRet = 0, iSize = 0;
    int *p = NULL;

    printf("Enter Number of elements you want: ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p, iSize);

    printf("Minimum number is %d",iRet);

    free(p);

    return 0;
}