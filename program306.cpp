//Accept N numbers from user and display count of even numbers using recursion 

#include<iostream>
using namespace std;

int CountEven(int Arr[], int iSize)
{
    static int i = 0;
    static int iCount = 0;
    if(i < iSize)
    {
        if(Arr[i] % 2 == 0)
        {
            iCount++;
        }
        i++;
        CountEven(Arr, iSize);
    }
    return iCount;
}

int main()
{
    int *Arr = NULL;
    int iLength = 0, i= 0, iRet = 0;

    cout<<"Enter number of elements: "<<endl;
    cin>>iLength;

    Arr = new int[iLength];

    cout<<"Enter elements: "<<endl;
    for(i = 0; i<iLength; i++)
    {
        cin>>Arr[i];
    }

    iRet = CountEven(Arr, iLength);

    cout<< "Count of even elements are: "<<iRet<<endl;
    delete []Arr;

    return 0;
}