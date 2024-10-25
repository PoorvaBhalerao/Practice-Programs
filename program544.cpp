//POP implementation of array
//defining seperate functions

#include<iostream>
using namespace std;

void Accept(int Arr[], int iSize)
{
    int i = 0;
    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Display(int Arr[], int iSize)
{
    int i = 0;
    cout<<"Entered elements are: "<<endl;
    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    ptr = new int[iLength];

    Accept(ptr, iLength);
    
    Display(ptr, iLength);

    delete []ptr;
    return 0;
}