// Accept N numbers from user and accept one another number as NO and 
// Return index of last occurence of that NO.
// Input:  N:  6
//  No: 66
// Elements:   85  66  11   80  66  11
// Output: 5
#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0, iOccurence = 0;
    
    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] == iNo)
        {
            iOccurence = i+1;
        }       
    }
    if(iOccurence != 0)
    {
        return iOccurence;
    }
    else
    {
        return -1;
    }
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

    printf("Enter a number you want to check in given numbers: ");
    scanf("%d",&iValue);

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Index of Last occurence of %d is %d",iValue,iRet);
    }
    
    free(p);

    return 0;
}