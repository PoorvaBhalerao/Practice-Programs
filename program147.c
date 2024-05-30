// Accept two numbers from user and swap numbers (in main also it has been reversed)

#include<stdio.h>
#include<stdlib.h>

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int A = 0, B = 0;

    printf("Enter first number:\n");
    scanf("%d",&A);

    printf("Enter second number:\n");
    scanf("%d",&B);

    Swap(&A, &B);       //Swap(100, 200)..these are imaginary addresses

    printf("Value of A after swaping: %d\n", A);
    printf("Value of B after swaping: %d\n",B);

    return 0;
}