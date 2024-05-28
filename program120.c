//Write a program to accept size of array and elements from user 
// and return addittion of all elements of array

#include<stdio.h>

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
    int Brr[5];
    int iRet = 0, i = 0;

    printf("Enter the Elements: \n");
    for(i = 0; i<5; i++)
    {
        scanf("%d",&Brr[i]);
    }

    iRet = Addition(Brr,5);       // Display(100, 5)...100 is imaginary value of address of first element of array
                          //.....5 for no os elements in array
    printf("Addition is: %d\n", iRet);
    
    return 0;
}