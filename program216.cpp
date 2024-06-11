// Accept N numbers from user and return avarage of that numbers
//Accept the input and allocate dynamic memory

#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, i = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    ptr = new int(iLength);


    //Logic

    delete []ptr;   //'[]' indicates this is sequential memory dont delete only first element delete whole sequential memory

    return 0;
}