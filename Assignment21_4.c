// Accept N numbers from user and accept Range, Display all elements from that range 
// Input:  N:  6
//  Start: 60   End:90
// Elements:   85  66  11   76  93  88
// Output: 85 66   76  88
#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;    
    for(i = 0; i<iLength; i++)
    {
        if((Arr[i] > iStart) && (Arr[i] < iEnd))
        {
            printf("%d\t", Arr[i]);
        }       
    }
}

int main()
{
    int iCnt = 0, iSize = 0, iValue1 = 0, iValue2 = 0;
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

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);
    

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}