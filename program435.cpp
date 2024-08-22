// Accpet N elements from user and display Largest element.
//Generic prog


#include<iostream>
using namespace std;


// float Maximum(float Arr[], int iSize)   //specific prog
// {
//     int i = 0;
//     float iMax = 0;
//     iMax = Arr[0];
//     for(i = 0; i<iSize ; i++)
//     {
//         if(Arr[i] > iMax)
//         {
//             iMax = Arr[i];
//         }
//     }
//     return iMax;
// }

template <class T>                      //generic prog
T Maximum(T Arr[], int iSize)
{
    int i = 0;
    T iMax = 0;
    iMax = Arr[0];
    for(i = 0; i<iSize ; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
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
    cout<<"Maximum is: "<<iRet<<endl;

    delete []ptr;

    return 0;
}
