//Accept N numbers from user and display it.


#include<iostream>
using namespace std;

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;

    cout<<"Enter number of elements: "<<endl;
    cin>>iLength;

    ptr = new int(iLength);

    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iLength; i++)
    {
        cin>>ptr[i];
    }
    
    cout<<"Entered Elements are: "<<endl;
    for(i = 0; i<iLength; i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete []ptr;

    return 0;
}
