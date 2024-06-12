//Problems on string.. accept name from user

#include<iostream>
using namespace std;

int main()
{

    char Arr[30];

    cout<<"Enter you name: "<<endl;
    cin.getline(Arr, 30);              // Accepts multi word string

    cout<<"Hello "<<Arr<<endl;

    return 0;
}