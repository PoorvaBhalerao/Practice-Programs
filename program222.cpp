<<<<<<< HEAD
// Accept N numbers from user 
//OOP Step 2

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int No)
        {
            cout<<"Inside constructor"<<endl;
            iSize = No;
            Arr = new int[iSize];   //constructor is used to allocate resource
        }

        ~ArrayX()
        {
            cout<<"Inside destructor"<<endl;
            delete []Arr;       //Deallocate resources
        }

        void Accept()
        {
            int i = 0;
            cout<<"Enter the elements: "<<endl;
            for(i = 0; i< iSize; i++)
            {
                cin>>Arr[i];
            }
        }

};

int main()
{
    int iLength = 0;
    
    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);   

    aobj.Accept();

    return 0;
=======
// Accept N numbers from user 
//OOP Step 2

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int No)
        {
            cout<<"Inside constructor"<<endl;
            iSize = No;
            Arr = new int[iSize];   //constructor is used to allocate resource
        }

        ~ArrayX()
        {
            cout<<"Inside destructor"<<endl;
            delete []Arr;       //Deallocate resources
        }

        void Accept()
        {
            int i = 0;
            cout<<"Enter the elements: "<<endl;
            for(i = 0; i< iSize; i++)
            {
                cin>>Arr[i];
            }
        }

};

int main()
{
    int iLength = 0;
    
    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);   

    aobj.Accept();

    return 0;
>>>>>>> b342bfba4ea71918666f6d5adc0d4352fa11ef03
}