// Write a program of Marking system application for school accept percentage of student 
//and display he is fail/pass class/second class or 
//first class or first class witth distinction

/*
    0 to 35         Fail            (35 is exclusive)
    35 to 50        Pass class      (50 is exclusive)
    50 to 60        Second class    (60 is exclusive)
    60 to 75        First class     (75 is exclusive)
    75 to 100       First class with distinction     (100 is exclusive)

*/
#include<stdio.h>

// User Defined macro
#define RET_INVALID -1
#define RET_FAIL 2
#define RET_PASSCLASS 3
#define RET_SECCLASS 4
#define RET_FIRSTCLASS 5
#define RET_DISTINCTION 6


int DisplayResult(float fMarks)
{
    if((fMarks < 0.0F) || (fMarks > 100.f))
    {
        return RET_INVALID;
    }
    else if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    else if((fMarks >= 35.0f) && (fMarks < 50.0f))
    {
        return RET_PASSCLASS;
    }
    else if((fMarks >= 50.0f) && (fMarks < 60.0f))
    {
        return RET_SECCLASS;
    }
    else if((fMarks >= 60.0f) && (fMarks < 75.0f))
    {
        return RET_FIRSTCLASS;
    }
    else if((fMarks >= 75.0f) && (fMarks < 100.0f))
    {
        return RET_DISTINCTION;
    }
}


int main()
{
    float fValue = 0.0f;
    int iRet = 0;
    
    printf("Enter your percentage: ");
    scanf("%f",&fValue);
    
    iRet = DisplayResult(fValue);

    switch(iRet)
    {
        case RET_FAIL:
            printf("Student is FAIL in Exam\n");
        break;

        case RET_PASSCLASS:
            printf("Student is having PASS CLASS\n");
        break;

        case RET_SECCLASS:
            printf("Student is having SECOND CLASS\n");
        break;

        case RET_FIRSTCLASS:
            printf("Student is having FIRST CLASS\n");
        break;

        case RET_DISTINCTION:
            printf("Student is having FIRST CLASS WITH DISTINCTION");
        break;

        case RET_INVALID:
            printf("Your input is INVALID\n");
        break;
    }
    
    
    return 0;
}












