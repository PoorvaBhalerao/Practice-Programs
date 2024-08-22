//OOP
//converting class to generic

#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int no)
        {
            iSize = no;
            Arr = new T[iSize];
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

        T Addition()
        {
            int i = 0;
            T Sum = 0;

            for(i = 0; i<iSize ; i++)
            {
                Sum = Sum + Arr[i];
            }
            return Sum;
        }

};


int main()
{
    ArrayX aobj(5);             // Error
    //missing template arguments before 'aobj'
    // ArrayX aobj(5);
            ^~~~
    int iRet = 0;

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();
    cout<<"Addition is: "<<iRet<<endl;

    return 0;
}
