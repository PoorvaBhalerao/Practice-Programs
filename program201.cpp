// Approach 4(using pointer)

#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int iNo1, iNo2;

        Arithmatic(int A, int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number: "<<endl;
    cin>> iValue1;

    cout<<"Enter Second number: "<<endl;
    cin>> iValue2;

    Arithmatic *aobj = new Arithmatic(iValue1, iValue2);        //Dynamic object
    iRet = aobj->Addition();

    cout<<"Addition is: "<<iRet<<endl;          //at place of \n we can use endl

    return 0;
}

