//OOP
//converting class to generic
//Error

#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        T Addition();
};

template <class T>
ArrayX::ArrayX(int no)
{
    iSize = no;
    Arr = new T[iSize];
}

template <class T>
ArrayX::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX::Accept()
{
    int i = 0;

    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX::Display()
{
    int i = 0;

    cout<<"Elements of the array are: "<<endl;

    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

template <class T>
T ArrayX::Addition()
{
    int i = 0;
    T Sum = 0;

    for(i = 0; i<iSize ; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}


int main()
{
    ArrayX <float>aobj(5);             //ERROR fixing
    
    aobj.Accept();
    aobj.Display();

    cout<<"Addition is: "<<aobj.Addition()<<endl;

    return 0;
}
