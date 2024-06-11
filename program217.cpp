<<<<<<< HEAD
// Accept N numbers from user and return avarage of that numbers
//Accept the input and display it
#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, i = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    ptr = new int(iLength);

    cout<< "Enter the elements: "<<endl;
    for(i = 0; i< iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"entered elements are: "<<endl;
    for(i = 0; i< iLength; i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete []ptr;   //'[]' indicates this is sequential memory dont delete only first element delete whole sequential memory

    return 0;
=======
// Accept N numbers from user and return avarage of that numbers
//Accept the input and display it
#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, i = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    ptr = new int(iLength);

    cout<< "Enter the elements: "<<endl;
    for(i = 0; i< iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"entered elements are: "<<endl;
    for(i = 0; i< iLength; i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete []ptr;   //'[]' indicates this is sequential memory dont delete only first element delete whole sequential memory

    return 0;
>>>>>>> b342bfba4ea71918666f6d5adc0d4352fa11ef03
}