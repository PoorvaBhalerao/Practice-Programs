//Write a program which accept string from user and copy the contents into another string by removing extra white spaces.
//Input: "Marvellous      Multi   OS"
//Output: "Marvellous Multi OS"

#include<iostream>
#include<string.h>
using namespace std;

void StrCpyX(const char *src, char *dest)
{
   const char *first = src;
   char *second = dest;

   bool prevSpace = false;

   while (*first != '\0')
   {
        if(*first != ' ')
        {
            *second = *first;
            second++;
            prevSpace = false;
        }
        else
        {
            if(!prevSpace)
            {
                *second = *first;
                second++;
            }
            prevSpace = true;
        }
        first++;
   }
   second = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];
    
    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    StrCpyX(Arr, Brr);

    cout<<"string is: "<<Brr<<endl;

    return 0;
}