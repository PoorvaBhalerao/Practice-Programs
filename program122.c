//Write a program to accept size of array and elements from user (dynamically)
// and return addittion of all elements of array

#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)  
{
    int i = 0;
    int iSum = 0;
    for(i = 0; i<iSize; i++)
    {
        iSum = iSum + Arr[i];           
    }
    return iSum;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;;
    int *Brr = NULL;
    
    //Step1:  Accept number of elements from user
    printf("Enter number of elements that you want: \n");
    scanf("%d",&iCount);

    //Step2:  Allocate dynamic memory for that number of elements
    Brr = (int*)malloc(iCount * sizeof(int));

    //Step3:  Accept the values from user and store into memory
    printf("Enter the elements:\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    //Step4:  Pass the address of memory to function
    iRet = Addition(Brr, iCount);
    printf("Addition is: %d", iRet);

    //Step5:  After using memory free it explicitly
    free(Brr);

    return 0;
}
