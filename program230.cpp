<<<<<<< HEAD
//Accept N numbers from user and count no of digits in each number seperatly and display it.

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
            
            iSize = No;
            Arr = new int[iSize];   
        }

        ~ArrayX()
        {
            
            delete []Arr;       
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


        void CalculateDigits()
        {
            int i = 0;
            int iNo = 0, iCount = 0;

            for(i = 0; i<iSize; i++)
            {
                iNo = Arr[i];
                while(iNo != 0)
                {
                    iCount++;
                    iNo = iNo/10;
                } 
                cout<<Arr[i]<<" contains "<<iCount<<" Digits in it"<<endl;
                iCount = 0;
            }         
                     
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;
    
    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    //ArrayX aobj(iLength);   //static allocation
    ArrayX *aobj = new ArrayX(iLength);    //Dynamic memory allocation

    aobj->Accept();
    
    aobj->CalculateDigits();

    delete aobj;    
   
    return 0;
=======
//Accept N numbers from user and count no of digits in each number seperatly and display it.

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
            
            iSize = No;
            Arr = new int[iSize];   
        }

        ~ArrayX()
        {
            
            delete []Arr;       
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


        void CalculateDigits()
        {
            int i = 0;
            int iNo = 0, iCount = 0;

            for(i = 0; i<iSize; i++)
            {
                iNo = Arr[i];
                while(iNo != 0)
                {
                    iCount++;
                    iNo = iNo/10;
                } 
                cout<<Arr[i]<<" contains "<<iCount<<" Digits in it"<<endl;
                iCount = 0;
            }         
                     
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;
    
    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    //ArrayX aobj(iLength);   //static allocation
    ArrayX *aobj = new ArrayX(iLength);    //Dynamic memory allocation

    aobj->Accept();
    
    aobj->CalculateDigits();

    delete aobj;    
   
    return 0;
>>>>>>> b342bfba4ea71918666f6d5adc0d4352fa11ef03
}