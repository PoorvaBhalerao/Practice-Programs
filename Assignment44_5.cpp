//Write a generic program to accept N values from user and return Smallest value.
#include<iostream>
using namespace std;


template<class T>
T Smallest(T Arr[], int iSize)
{
    int i = 0;
    T Min = 0;
    Min = Arr[0];
    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }

    return Min;
}

int main()
{
    int iLength = 0, iRet = 0,i=0;
    int *Arr = NULL;

    cout<<"Enter number of elements you want to enter: ";
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"Enter elements: "<<endl;
    for(i = 0; i<iLength ; i++)
    {
        cin>>Arr[i];
    }

    iRet = Smallest(Arr, iLength);

    cout<<"Smallest of numbers is: "<<iRet<<endl;

    
    float *Brr = NULL;
    float fRet = 0.0f;
    int iLength1 = 0;

    cout<<"Enter number of elements you want to enter: ";
    cin>>iLength1;

    Brr = new float[iLength1];

    cout<<"Enter elements: "<<endl;
    for(i = 0; i<iLength1 ; i++)
    {
        cin>>Brr[i];
    }

    fRet = Smallest(Brr, iLength1);

    cout<<"Smallest of numbers is: "<<fRet<<endl;


    return 0;
}