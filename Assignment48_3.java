//Write a program which accept matrix from user and 
// and return maximum number from diagonals.

// InPut:  3   2   5   9
//         4   3   2   2
//         8   4   1   5
//         3   9   7   5

// Output: 9

import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Please enter the data: ");

        int i = 0, j = 0;

        for(i = 0; i<iRow; i++)
        {
            for(j = 0; j<iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;
        System.out.println("Elements from the matrix: ");

        for(i = 0; i<iRow; i++)
        {
            for(j = 0; j<iCol; j++)
            {
                System.out.print(Arr[i][j]+ "\t");
            }
            System.out.println();
        }
    }

    public int MaxDiagonal()
    {
        int i = 0, j = 0, iMax1 = 0, iMax2 = 0;
        iMax1 = Arr[0][0];
        iMax2 = Arr[0][0];

        if(iRow != iCol)
        {
            System.out.println("Unable to find Maximum number of diagonal elements");
            System.out.println("Because matrix is not a square matrix");

            return -1;
        }

        for(i = 0; i< iRow; i++)
        {
            for(j = i; (j<iCol) && (i == j); j++)
            {
                if(i == j)
                {
                    if(Arr[i][j] > iMax1)
                    {
                        iMax1 = Arr[i][j];
                    }
                }
            }
        }
        
        for(i = 0; i<iRow; i++)
        {
            j = iCol - 1 - i;
            if(Arr[i][j] > iMax2)
            {
                iMax2 = Arr[i][j];
            }
        }

        if(iMax1 > iMax2)
        {
            return iMax1;
        }
        else
        {
            return iMax2;
        }
    }

}


class Assignment48_3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter Number of rows: ");
        int No1 = sobj.nextInt();

        System.out.println("Enter Number of Columns: ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1, No2);

        mobj.Accept();
        mobj.Display();

        iRet  = mobj.MaxDiagonal();
        System.out.println("Maximum number from Diagonals is: "+iRet);
        
        mobj = null;
    }
}