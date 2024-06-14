//Write a program which accept string from user and 
//replace each occurence of first character of each word into capital case.
//Input: "marvellous multi os"
//Output: "Marvellous Multi OS"

#include<iostream>
#include<string.h>
using namespace std;

void CapFirstLetter(char *str)
{
   if((*str >= 'a') &&(*str <='z'))
   {
        *str = *str -32;
   }

   while(*str != '\0')
   {
        if(*str == ' ')
        {
            str++;

            if((*str >= 'a') &&(*str <='z'))
            {
                    *str = *str -32;
            }
        }
        str++;
   }
}

int main()
{
    char Arr[50];
    char Brr[50];
    
    cout<<"Enter a string: "<<endl;
    cin.getline(Arr, 50);

    CapFirstLetter(Arr);

    cout<<"string is: "<<Arr<<endl;

    return 0;
}