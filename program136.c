// Accept N numbers from user and display Largest number from N numbers

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int i = 0, iMax = 0;
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

    iRet = Maximum(p, iSize);

    printf("Maximun number is %d",iRet);

    free(p);

    return 0;
}