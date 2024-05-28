// Accept N numbers from user and accept one another number as NO and check whether No is present or not.
// Input:  N:  6
//  No: 66
// Elements:   85  66  11   80  93  11
// Output: 66 is present
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int i = 0;
    bool bFlag = false;
    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            bFlag = true;
        }
    }
    return bFlag;
}

int main()
{
    int iCnt = 0, iSize = 0, iValue = 0;
    bool bRet = false;
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

    printf("Enter a number you want to check in given numbers: ");
    scanf("%d",&iValue);

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is absent",iValue);
    }

    free(p);

    return 0;
}