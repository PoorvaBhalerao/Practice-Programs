//DS- Linear Search
//Search whether element is present or not
//generic prog


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
        bool LinearSearch(T Value);      
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

template <class T>
bool ArrayX<T>::LinearSearch(T Value)
{
    int i = 0;
    bool bFlag = false;
    for(i = 0; i< iSize; i++)
    {
        if(Arr[i] == Value)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iLength = 0, No = 0;
    bool bRet = false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();
    //aobj->Display();

    cout<<"Enter the element that you want to search: ";
    cin>>No;
    
    bRet = aobj->LinearSearch(No);

    if(bRet == true)
    {
        cout<<"Element is present\n";
    }
    else 
    {
        cout<<"Element is not present\n";
    }

    delete aobj;

    return 0;
}