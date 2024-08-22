//Accept N numbers from user and display Addition of that numbers.
//generic programming

#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int iSize)
{
    T iSum = 0;
    int i = 0;
    for(i = 0; i< iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}


int main()
{
    int iLength = 0;
    float *ptr = NULL;
    int i = 0;
    float iRet = 0.0f;

    cout<<"Enter number of elements: "<<endl;
    cin>>iLength;

    ptr = new float(iLength);

    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iLength; i++)
    {
        cin>>ptr[i];
    }
    
    iRet = Addition(ptr, iLength);
    cout<<"Addition of elements is: "<<iRet<<endl;

    delete []ptr;

    return 0;
}
