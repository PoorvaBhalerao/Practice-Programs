//Write a program which accept distance in kilometre and convert it into meter.
//(1 kilometer = 1000 Meter)
//Input:    5
//Output:   5000

#include<stdio.h>

int KMToMeter(int iNo)
{
    int meter = 0;
    meter = iNo * 1000;
    return meter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue);

    iRet =KMToMeter(iValue);

    printf("The distance in Meter is %d",iRet);
    
    return 0;
}