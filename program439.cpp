//OOP,addition of numbers
#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int no)
        {
            iSize = no;
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
            for(i = 0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<<"Elements of the array are: "<<endl;

            for(i = 0; i<iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        int Addition()
        {
            int i = 0, Sum = 0;

            for(i = 0; i<iSize ; i++)
            {
                Sum = Sum + Arr[i];
            }
            return Sum;
        }

};


int main()
{
    ArrayX aobj(5);
    int iRet = 0;

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();
    cout<<"Addition is: "<<iRet<<endl;

    return 0;
}
