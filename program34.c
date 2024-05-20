// Write a program to accpet number form user as iValue and display the numbers from 1 to iValue-1


    #include<stdio.h>
    #include<stdbool.h>

    void Display(int iNo)
    {
        int iCnt = 0;
        //      1          2          3
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            printf("%d\n",iCnt);    // 4
        }
    }

    int main()
    {
        int iValue = 0;

        printf("Enter number : \n");
        scanf("%d",&iValue);

        Display(iValue);

        return 0;
    }
