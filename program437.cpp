// Accpet N elements from user and display Smallest element.
//Generic prog


#include<iostream>
using namespace std;


// float Minimum(float Arr[], int iSize)   //specific prog
// {
//     int i = 0;
//     float iMin = 0;
//     iMin = Arr[0];
//     for(i = 0; i<iSize ; i++)
//     {
//         if(Arr[i] < iMin)
//         {
//             iMin = Arr[i];
//         }
//     }
//     return iMin;
// }

template <class T>                      //generic prog
T Maximum(T Arr[], int iSize)
{
    int i = 0;
    T iMin = 0;
    iMin = Arr[0];
    for(i = 0; i<iSize ; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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
    
    iRet = Maximum(ptr, iLength);
    cout<<"Smallest is: "<<iRet<<endl;

    delete []ptr;

    return 0;
}
