//Accept a number and convert it in decimal, octal and hexadecimal number.

#include<stdio.h>

int main()
{
    int no = 21;

    printf("Decimal : %d\n",no);
    printf("Octal : %o\n",no);
    printf("Hexadecimal : %x\n",no);

    return 0;
}

/*
    Numbering Systems
    --------------------------------------------------------------------------------------------------
    Name                    Base                Range               Values
    --------------------------------------------------------------------------------------------------
    Decimal                 10              0 to 9                  0 1 2 3 4 5 6 7 8 9

    Octal                   8               0 to 7                  0 1 2 3 4 5 6 7

    Hexadecimal             16              0 to 15                 0 1 2 3 4 5 6 7 8 9 A B C D E F 
                                        (0 to 9 and A to F)

    Binary                  2               0 to 1                  0 1

    --------------------------------------------------------------------------------------------------
*/