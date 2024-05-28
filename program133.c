// Write a program to accept N elements from user (dynamically) and accept a number from user
// and display count of how many time that number comes in N element.
#include<stdio.h>
#include<stdlib.h>

int Search(int Arr[], int iSize, int iNo)  
{
    int i = 0, iFrequency = 0; 
    
    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iFrequency++;
        }          
    }
    return iFrequency;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0; 
    int iValue = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want: \n");   
    scanf("%d",&iCount);

    Brr = (int*)malloc(iCount * sizeof(int));   

    printf("Enter the elements:\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Enter element that you want to search:\n");
    scanf("%d", &iValue);

    iRet = Search(Brr, iCount, iValue);       

    printf("Frequency of that number from entered elements is: %d", iRet);

    free(Brr); 

    return 0;
}
