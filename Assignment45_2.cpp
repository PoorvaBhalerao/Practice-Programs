//Write generic program which accept one value and one number from user and Print that value that number of times on screen.
// Input:10 20 30 10 30 40 50 10 40 10
//        10
// Output:4

#include<iostream>
using namespace std;

template <class T>
int Frequency(T Arr[], int iSize, T No)
{
    int i = 0;
    int iCount = 0;
    for(i = 0; i< iSize; i++)
    {
        if(Arr[i] == No)
        {
            iCount++;
        }
    }
    return iCount;
}


int main()
{
    int *Arr = NULL;
    int iLength = 0;
    int Value = 0;
    int i = 0, iRet = 0;

    cout<<"Enter number of elements you want to enter: ";
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iLength; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter the value that you want to find frequency of: ";
    cin>>Value;

    iRet = Frequency(Arr, iLength, Value);

    cout<<"The Frequency of "<<Value<<" is: "<<iRet;

    float *Brr = NULL;
    float Value1 = 0.0f;
    int iLength1 = 0;
    cout<<"Enter number of elements you want to enter: ";
    cin>>iLength1;

    Brr = new float[iLength1];

    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iLength1; i++)
    {
        cin>>Brr[i];
    }

    cout<<"Enter the value that you want to find frequency of: ";
    cin>>Value1;

    iRet = Frequency(Brr, iLength, Value1);

    cout<<"The Frequency of "<<Value1<<" is: "<<iRet;

    return 0;
}