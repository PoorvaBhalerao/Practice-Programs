//Accept N numbers from user and sum of digits in each number seperatly and display it.

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
            //cout<<"Inside constructor"<<endl;
            iSize = No;
            Arr = new int[iSize];   //constructor is used to allocate resource
        }

        ~ArrayX()
        {
            //cout<<"Inside destructor"<<endl;
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

        int SumDigits(int iNo)
        {
            int iSum = 0;
            while(iNo != 0)
            {
               
                iSum = iSum + (iNo % 10);
                iNo = iNo/10;
            } 
            return iSum;
        }
        
        void DisplayDigitsSum()
        {
            int i = 0;
            int iRet = 0;

            for(i = 0; i<iSize; i++)
            {
                iRet = SumDigits(Arr[i]);
                
                cout<<"Sum of digits of "<<Arr[i]<<" is "<<iRet<<endl;              
            }         
                     
        }
};

int main()
{
    int iLength = 0;
    
    cout<<"Enter number of elements that you want to store: "<<endl;
    cin>>iLength;

    //ArrayX aobj(iLength);   //static allocation
    ArrayX *aobj = new ArrayX(iLength);    //Dynamic memory allocation

    aobj->Accept();
    
    aobj->DisplayDigitsSum();

    delete aobj;    
   
    return 0;
}