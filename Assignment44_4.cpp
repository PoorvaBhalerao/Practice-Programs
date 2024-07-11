//Write a generic program to accept N values from user and return Largest value.
#include<iostream>
using namespace std;


template<class T>
T Largest(T Arr[], int iSize)
{
    int i = 0;
    T Max = 0;
    Max = Arr[0];
    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }

    return Max;
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

    iRet = Largest(Arr, iLength);

    cout<<"Largest of numbers is: "<<iRet<<endl;

    
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

    fRet = Largest(Brr, iLength1);

    cout<<"Largest of numbers is: "<<fRet<<endl;


    return 0;
}