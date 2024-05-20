// Write a program of Marking system application for school accept percentage of student 
//and display he is fail/pass class/second class or 
//first class or first class witth distinction
#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))        // Filter
    {
        printf("Invalid input\n");
        return false;
    }
    if((fMarks>=0.0f) && (fMarks < 35.0f))
    {
        return false;
    }
    else
    {
        return true;
    }
    
}


int main()
{
    float fValue = 0.0f;
    bool bRet = false;
    
    printf("Enter your percentage: ");
    scanf("%f",&fValue);
    
    
    bRet = DisplayResult(fValue);

    if(bRet == true)
    {
        printf("Student is pass in exam\n");
    }
    else
    {
        printf("Student is fail in exam\n");
    }


    return 0;
}