//Write a program which accept width and height of rectangle from user and calculate its area.
//(Area = Width * Height)
//Input:5.3     9.78
//Output:51.834
#include<stdio.h>

double RectArea(float fNo1, float fNo2)
{
    double Area = 0.0;
    Area = fNo1 * fNo2;
    return Area;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet =RectArea(fValue1, fValue2);

    printf("Area of Rectangle is %lf",dRet);
    
    return 0;
}
