// Accept division of student from user and depends on division display exam timing.
// there are 4 divisions in school as A,B,C,D.
// Exam of division A at 7am, B at 8:30am, C at 9:20am and D at 10:30am
// (Application should be case insensitive)
// Input: c 
// Output: Your exam is at 9:20am

#include<stdio.h>

void DisplaySchedule(char div)
{
    
    switch(div)
    {
        case 'a':
            printf("Exam is at 7am");
            break;
        
        case 'A':
            printf("Exam is at 7am");
            break;

        case 'b':
            printf("Exam is at 8:30am");
            break;
            
        case 'B':
            printf("Exam is at 8:30am");
            break;

        case 'c':
            printf("Exam is at 9:20am");
            break;

        case 'C':
            printf("Exam is at 9:20am");
            break;

        case 'd':
            printf("Exam is at 10:30am");
            break;

        case 'D':
            printf("Exam is at 10:30am");
            break;

        default:
            printf("Invalid Division");
            break;

    }
            
       
}
    


int main()
{
    char cValue = '\0';

    printf("Enter Division from A,B,C,D: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
