// Accept number from user and split its digits


#include<stdio.h>

int main()
{
    int iNo = 438;
    int iDigit = 0;
    
    // 10 is used because we use decimal number system.
    iDigit = iNo % 10;      //8
    printf("%d\n",iDigit);  // 8

    iNo = iNo /10;  //  43

    iDigit = iNo % 10;      //3
    printf("%d\n",iDigit);  //3

    iNo = iNo /10;  //  4

    iDigit = iNo % 10;      //4
    printf("%d\n",iDigit);  //4

    iNo = iNo /10;  //  0

    return 0;
}

// 89456
// 89456 % 10  //6........due to % we gets reminder
// 89456 / 10  //8945.....due to / we gets quotient