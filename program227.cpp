<<<<<<< HEAD
// Accept N numbers from user and return avarage of that numbers
//Static object creation

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
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

        void Display()
        {
            int i = 0;
            cout<<"Elements are: "<<endl;
            for(i = 0; i< iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        float Average()
        {
            int i = 0, iSum = 0;
            float favg = 0.0f;
            for(i = 0; i<iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            favg = (float)iSum / (float)iSize;
            return favg;
        }
};

int main()
{
    int iLength = 0;
    float fRet = 0.0f;
    
    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);   

    aobj.Accept();
    aobj.Display();
    
    fRet = aobj.Average();
    cout<<"Avarage is : "<<fRet<<endl;
   
    return 0;
=======
// Accept N numbers from user and return avarage of that numbers
//Static object creation

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
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

        void Display()
        {
            int i = 0;
            cout<<"Elements are: "<<endl;
            for(i = 0; i< iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        float Average()
        {
            int i = 0, iSum = 0;
            float favg = 0.0f;
            for(i = 0; i<iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            favg = (float)iSum / (float)iSize;
            return favg;
        }
};

int main()
{
    int iLength = 0;
    float fRet = 0.0f;
    
    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);   

    aobj.Accept();
    aobj.Display();
    
    fRet = aobj.Average();
    cout<<"Avarage is : "<<fRet<<endl;
   
    return 0;
>>>>>>> b342bfba4ea71918666f6d5adc0d4352fa11ef03
}