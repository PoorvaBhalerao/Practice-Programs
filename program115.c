//Using function Display display array
#include<stdio.h>

void Display(int *ptr, int iSize)
{
    int i = 0;
    for(i = 0; i<iSize; i++)
    {
        printf("%d\n", *ptr);   //  10  20  30  40  50
        ptr++;
    }

}

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};
    
    Display(Arr,5);       // Display(100, 5)...100 is imaginary value of address of first element of array
                          //.....5 for no os elements in array
    
    return 0;
}