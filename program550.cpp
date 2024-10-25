//OOP implementation of array
//Generic code for double


#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int Value); 
        void Accept();
        void Display();
        ~ArrayX();       
};

template <class T>
ArrayX<T>::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new T[iSize];
}

template <class T>
void ArrayX<T>::Accept()
{
    int i = 0;
    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int i = 0;
    cout<<"Entered elements are: "<<endl;
    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    ArrayX<double> *aobj = new ArrayX<double>(iLength);

    aobj->Accept();
    aobj->Display();

    delete aobj;

    return 0;
}