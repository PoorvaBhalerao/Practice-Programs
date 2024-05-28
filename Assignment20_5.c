// Accept N numbers from user and accept one another number as NO and return frequency of NO from it.
// Input:  N:  6
//  No: 66
// Elements:   85  66  11   80  93  11
// Output: Frequency of 66 is 1
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int i = 0, iCount = 0;
    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iCnt = 0, iSize = 0, iValue = 0;
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

    printf("Enter a number which frequency you want to check in given numbers: ");
    scanf("%d",&iValue);

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency of %d in given numbers is %d",iValue,iRet);

    free(p);

    return 0;
}