//OOP
//converting class to generic
//dynalic object creation


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
ArrayX<T> :: ArrayX(int no)     //ArrayX is not simple class it is generic class so ArrayX<T> is Written
{
    iSize = no;
    Arr = new T[iSize];
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
    int i = 0;

    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T> :: Display()
{
    int i = 0;

    cout<<"Elements of the array are: "<<endl;

    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

template <class T>
T ArrayX<T> :: Addition()
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
    //ArrayX <float>aobj(5);             

    ArrayX<float> *fobj = new ArrayX<float>(5);       //dynamic object creation
    
    fobj->Accept();
    fobj->Display();

    cout<<"Addition is: "<<fobj->Addition()<<endl;

    ArrayX<int> *iobj = new ArrayX<int>(5);       //dynamic object creation
    
    iobj->Accept();
    iobj->Display();

    cout<<"Addition is: "<<iobj->Addition()<<endl;

    return 0;
}
