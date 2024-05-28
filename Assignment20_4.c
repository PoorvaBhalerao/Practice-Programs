// Accept N numbers from user and return frequency of 11 from it.
// Input:  N:  6
// Elements:   85  66  11   80  93  11
// Output: Frequency of 11 is 2
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0, iCount = 0;
    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] == 11)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet = Frequency(p, iSize);

    printf("Frequency of 11 in given numbers is %d",iRet);

    free(p);

    return 0;
}