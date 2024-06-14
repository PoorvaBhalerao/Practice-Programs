//Write a program which accepts 2 string from user and concat N characters of second string after First string.
//Value of N should be accepted from user.(Implement strncat() function)
// If third parameter(value of N) is greater than size of second string then concate whole string after first string)
//Input: "Marvellous Infosystems"
//       "Logic Building"
//          5
//Output: "Marvellous InfosystemsLogic"

#include<stdio.h>
#include<string.h>

void StrNCatX(char *src, char *dest, int icnt)
{
    int i = 0;
    while(*src != '\0')
    {
        src++;
    }

    while((*dest != '\0') && (icnt != 0))
    {
        *src = *dest;
        src++;
        dest++;
        icnt--;
    }
    *src = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];
    int iNo = 0;

    printf("Enter First string: ");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string: ");
    scanf("%s",Brr);

    printf("Enter number of characters you want to concat: ");
    scanf("%d",&iNo);
    

    StrNCatX(Arr, Brr, iNo);

    printf("Source String after concatanation : %s",Arr);

    return 0;
}