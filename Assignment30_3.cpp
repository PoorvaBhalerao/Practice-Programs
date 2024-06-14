//Write a program which accepts 2 string from user and check whether,
//First n contents of two strings are qual or not.(Implement strcmp() function)

//Input: "Marvellous Infosystems"
//      "Marvellous Logic Building"
//          10
//Output: True

#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;

bool strNcmpX(char *first, char *second, int iCnt)
{
    int i = 0;
    
    while((*first != '\0') && (*second != '\0')&& (iCnt != 0))
    {
        if(*first == *second)
        {
            first++;
            second++;
            iCnt--;
        }
        else
        {
            break;
        }        
    }

    if(iCnt == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
   
}

int main()
{
    char Arr[50];
    char Brr[50];
    int iNo = 0;
    bool bRet = false;

    cout<<"Enter first string: "<<endl;
    cin.getline(Arr, 50);

    cout<<"Enter first string: "<<endl;
    cin.getline(Brr, 50);

    cout<<"Enter number for which characters you want to compare: "<<endl;
    cin>>iNo;


    bRet = strNcmpX(Arr, Brr, iNo);

    if(bRet == true)
    {
        cout<<"Strings are identical"<<endl;
    }
    else
    {
        cout<<"Strings are different"<<endl;
    }    

    return 0;
}