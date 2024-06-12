//Accpet two strings from user and compare both the strings(contents)
//if both strings are identical it will return True
//If both are not equal it will return False.
//User defined function

#include<iostream>
#include<string.h>
using namespace std;

bool strcmpX(char *First, char *Second)
{
    while((*First != '\0') && (*Second != '\0'))
    {
        if(*First != *Second)
        {
            
            break;
        }
        First++;
        Second++;
    }
    
    if((*First == '\0') && (*Second == '\0'))    
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
    char Arr[30];
    char Brr[30];    
    bool bRet = false;

    cout<<"Enter First string: "<<endl;
    cin.getline(Arr, 30);

    cout<<"Enter Second string: "<<endl;
    cin.getline(Brr, 30);

    bRet = strcmpX(Brr, Arr);

    if(bRet == true)
    {
        cout<<"Strings are identical"<<endl;
    }
    else
    {
        cout<<"Strings are Different"<<endl;
    }

    
    return 0;
}