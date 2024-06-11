//Accept N numbers from user and count no of digits in each number seperatly and display it.
//Defining seperate functions

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


        int CalculateDigits(int iNo)
        {
           
            int iCount = 0;

            while(iNo != 0)
            {
                iCount++;
                iNo = iNo/10;
            } 
            return iCount;  
                     
        }

        void DisplayDigitsCount()
        {
            int i = 0,iRet = 0;

            for(i = 0; i<iSize; i++)
            {
                iRet = CalculateDigits(Arr[i]);
                cout<<Arr[i]<<" contains "<<iRet<<" Digits in it."<<endl;
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
    
    aobj->DisplayDigitsCount();

    delete aobj;    
   
    return 0;
}