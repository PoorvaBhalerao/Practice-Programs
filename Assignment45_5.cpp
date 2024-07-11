//Write generic program to accept N values and reverse the contents.
//Input: 10 20  30  10  30  40  10  40  10  
//Output:10 40  10  40  30  10  30  20  10
#include<iostream>
using namespace std;

template<class T>
void Reverse(T Arr[], int iSize)
{
    T temp;
    int iStart = 0, i = 0;
    int iEnd = iSize-1;
    for(i = iStart; iStart<iEnd ; iStart++, iEnd--)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;
    }
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

    Reverse(Arr, iLength);
    
    for(i=0; i<iLength; i++)
    {
        cout<<Arr[i]<<"\t"; 
    }

    return 0;
}