// Accept N numbers from user and reverse(swap) that array(swapping)
// this is inplace reverse(in main func also it is reversed)

#include<stdio.h>
#include<stdlib.h>

void Reverse(int Arr[], int iLength)
{
    int iStart = 0, iEnd = 0, Temp = 0;
    iStart = 0;
    iEnd = iLength-1;
    
    while(iStart < iEnd)
    {
        Temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = Temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int iCnt = 0,iSize = 0;
    int *p = NULL;

    printf("Enter Number of elements you want: ");
    scanf("%d", &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements:\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Reverse(p, iSize);      //here we send address so below data is updated 

    printf("Elements after reverse: \n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",p[iCnt]);
    }

    free(p);

    return 0;
}