// accept number from user and check whether it is divisible by 3 and 5
// if u use && operator then it is logical operator
//if u use & operator thenit is bitwise operator


#include<stdio.h>
#include<stdbool.h>

// User is going to input only positive inputs
// Algorithm
/*
    START
        Accept one number No
        Divide that number No by 3
        If reminder is 0
        Divide that number No by 5
        If reminder is 0
        then display number is divisible by 3 and 5
        otherwise display it is not divisible by 3 and 5
    STOP
*/

/////////////////////////////////////////////////////////////////////
//
//  Function name:      CheckDivisible
//  Description:        Used to check whether number is divisible by 3 and 5
//  Input:              Integer
//  Output:             Boolean
//  Author:             Poorva Rohan Bhalerao
//  Date:               16/05/2024
//
/////////////////////////////////////////////////////////////////////

bool CheckDivisible(unsigned int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5\n", iValue);
    }
    else
    {
        printf("%d is not divisible by either or both 3 and 5\n", iValue);
    }
    return 0;
}
/*
    Logical && operator and || operator

    Fist        Seond       Result of &&        Result of ||
    true        true        true                true
    true        false       false               true    
    false       true        false               true
    false       false       false               false
*/

