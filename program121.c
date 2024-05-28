//Write a program to accept size of array and elements from user (dynamically) and display it
#include<stdio.h>
#include<stdlib.h>  // for malloc and free

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;
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
    //Missing

    
    printf("Entered elements are:\n");
    for(i =0 ; i<iCount ; i++)
    {
        printf("%d\t", Brr[i]);
    }

    //Step5:  After using memory free it explicitly
    free(Brr);

    return 0;
}

/*
Step1:  Accept number of elements from user
Step2:  Allocate dynamic memory for that number of elements
Step3:  Accept the values from user and store into memory
Step4:  Pass the address of memory to function 
Step5:  After using memory free it explicitly
*/