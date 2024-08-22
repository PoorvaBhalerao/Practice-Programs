//Accept N numbers from user and display Addition of that numbers.


#include<iostream>
using namespace std;

int Addition(int Arr[], int iSize)
{
    int iSum = 0,i = 0;
    for(i = 0; i< iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}


int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0, iRet = 0;

    cout<<"Enter number of elements: "<<endl;
    cin>>iLength;

    ptr = new int(iLength);

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
