// Write generic program to accept N values and search first occurence of any specific value.
// Input:  10  20  30  10  30  40  10  40  10  
// Value to search: 40
// Output:8
#include<iostream>
using namespace std;

template <class T>
int SearchLast(T Arr[], int iSize, T iNo)
{
    int i = 0;
    int iPos = 1;
    int iPosition = 0;
    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iPosition = iPos;
        }
        iPos++;
    }
    return iPosition;
}

int main()
{
    int Arr[] = {10,20,30,40,50,10,40,10,20};
    char Brr[] = {'a', 'b','d','b','f'};
    int iRet = SearchLast(Arr, 9, 40);
    int iRet1 = SearchLast(Brr, 5, 'b');

    printf("Last Occurence of Number is at position %d\n",iRet);
    printf("Last Occurence of Character is at position %d\n",iRet1);

    return 0;
}
