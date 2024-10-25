//POP implementation of array

#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Entered elements are: "<<endl;
    for(i = 0; i<iLength; i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete []ptr;
    return 0;
}