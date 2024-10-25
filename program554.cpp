//DS-Binary Search(if data is sorted then we can use binary search)
//Data is in Increasing format or Ascending
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
        bool BiDirectionalSearch(T Value);  
        bool BinarySearch(T Value); 
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

template <class T>
bool ArrayX<T>::BiDirectionalSearch(T Value)
{
    bool bFlag = false;
    int iStart = 0, iEnd = iSize-1;
    int i = 0, j = 0;
    
    for(i = iStart, j = iEnd; iStart<=iEnd; i++, j--)
    {
        if((Arr[i] == Value) || (Arr[j] == Value))
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

template <class T>
bool ArrayX<T>::BinarySearch(T Value)
{
    int iStart= 0, iEnd = 0, iMid = 0;
    bool flag = false;

    iStart = 0;
    iEnd = iSize-1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) /2);

        if(Arr[iMid] == Value)
        {
            flag = true;
            break;
        }
        else if(Value > Arr[iMid])
        {
            iStart = iMid + 1;
        }
        else if(Value < Arr[iMid])
        {
            iEnd = iMid - 1;
        }
    }
    return flag;
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
    
    //bRet = aobj->LinearSearch(No);
    //bRet = aobj->BiDirectionalSearch(No);
    bRet = aobj->BinarySearch(No);

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