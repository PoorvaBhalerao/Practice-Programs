// Write generic program to accept N values and search first occurence of any specific value.
// Input:  10  20  30  10  30  40  10  40  10  
// Value to search: 40
// Output:6
#include<stdio.h>


template <class T>
int SearchFirst(T Arr[], int iSize, T iNo)
{
    int i = 0;
    int iPos = 1;
    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            break;
        }
        iPos++;
    }
    return iPos;
}

int main()
{
    int Arr[] = {10,20,30,40,50,10,50,10,20};
    char Brr[] = {'a', 'b','d','p','f'};
    int iRet = SearchFirst(Arr, 9, 40);
    int iRet1 = SearchFirst(Brr, 5, 'b');

    printf("First Occurence of Number is at position %d\n",iRet);
    printf("First Occurence of Character is at position %d\n",iRet1);

    return 0;
}
