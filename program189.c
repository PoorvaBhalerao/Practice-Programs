// Accpet string and print characteer by character using for loop
#include<stdio.h>



void Display(char *str)
{
    int iCnt = 0;

    for(iCnt = 0; str[iCnt] != '\0' ; iCnt++)
    {
        printf("%c\n", str[iCnt]);
    }
  
    
}

int main()
{
    char Arr[100];
    
    printf("Enter a string: \n");
    scanf("%[^'\n']s", Arr);

    Display(Arr);       

    


    return 0;
}