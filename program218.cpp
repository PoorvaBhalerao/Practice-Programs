// Accept N numbers from user and return avarage of that numbers

#include<iostream>
using namespace std;

float Average(int Arr[], int iSize)
{
    int iSum = 0, i = 0;
   
    for(i =0; i<iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return (iSum / iSize);
    
}


int main()
{
    int iLength = 0, i = 0;
    float fRet = 0.0f;
    int *ptr = NULL;

    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    ptr = new int(iLength);

    cout<< "Enter the elements: "<<endl;
    for(i = 0; i< iLength; i++)
    {
        cin>>ptr[i];
    }

    fRet = Average(ptr, iLength);

    cout<<"Average is : "<<fRet<<endl;

    delete []ptr;   

    return 0;
}