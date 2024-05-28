//Accept N numbers from user and return difference between frequency of even numbers and odd numbers.
//Input:    N:  7
// Elements:   85  66  3    80   93  88 90
// Output: 1(4-3)
#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[], int iLength)
{
    int i = 0, iEvenFreq = 0, iOddFreq = 0;
    for(i = 0; i<iLength; i++)
    {
        if(Arr[i]%2 == 0)
        {
            iEvenFreq++;
        }
        else
        {
            iOddFreq++;
        }
    }
    return iEvenFreq - iOddFreq;
}

int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
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

    iRet = Count(p, iSize);

    printf("Difference between Frequency of even and odd numbers is %d", iRet);

    free(p);

    return 0;
}