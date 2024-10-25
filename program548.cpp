//OOP implementation of array
//Generic code


#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int Value);
   
        
        void Accept();
       

        void Display();
        

        ~ArrayX();
       
};

ArrayX::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new int[iSize];
}
        
void ArrayX::Accept()
{
    int i = 0;
    cout<<"Enter the elements: "<<endl;
    for(i = 0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX::Display()
{
    int i = 0;
    cout<<"Entered elements are: "<<endl;
    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

ArrayX::~ArrayX()
{
    delete []Arr;
}

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept();
    
    aobj->Display();

    delete aobj;

    return 0;
}