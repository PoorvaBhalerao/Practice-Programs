//Accept N numbers from user and is any number is negative convert that element into positive number and display

#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iLength)
{
    int i = 0;
    for(i = 0; i<iLength; i++)
    {
        if(Arr[i] < 0)
        {
            Arr[i] = -Arr[i];
        }
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

    Updator(p, iSize);      //here we send address so below data is updated 

    printf("Data after updation is:\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",p[iCnt]);     //because it is by call by address
    }

    free(p);

    return 0;
}