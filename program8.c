// Accept one number from user and check whether it is even or odd
// if question has "check whether" always use bool datatype include <stdbool.h> header file
// we are going to use unsigned long which is positive number

#include<stdio.h>
#include<stdbool.h>

// User is going to input only positive inputs
// Algorithm
/*
    START
        Accept one number No
        Divide that number No by 2
        If reminder is 0
        then display result as Even number
        otherwise display the result as Odd number
    STOP
*/

/////////////////////////////////////////////////////////////////////
//
//  Function name:      CheckEvenOdd
//  Description:        Used to check whether function is even or odd
//  Input:              Integer
//  Output:             Boolean
//  Author:             Poorva Rohan Bhalerao
//  Date:               16/05/2024
//
/////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo % 2) == 0)
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
    unsigned int iValue = 0;
    bool bRet = false;
    
    printf("Enter a Number: \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n", iValue);
    }
    else
    {
        printf("%d is Odd number\n", iValue);
    }
    return 0;
}

//Test
//Enter a number: 10        10 is Even number
//Enter a number: 15        15 is odd number