//Write a program which accept matrix from user and 
// and swap the contents of consecutive row.

// InPut:  3   2   5   9
//         4   3   2   2
//         8   4   1   5
//         3   9   7   5

// outpur:  4   3   2   2
//         3   2   5   9
//         3   9   7   5
//         8   4   1   5

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

    public void SwapRow()
    {
        int i = 0, j = 0, temp = 0;

        for(i = 0; i< iRow - 1; i = i+ 2)
        {
            for(j = 0; j<iCol; j++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = temp;
            }
        }
    }
   

}


class Assignment48_5
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

        System.out.println("Elements Before Swapping rows: ");
        mobj.Display();

        mobj.SwapRow();
        
        System.out.println("Elements After Swapping rows: ");
        mobj.Display();
        
        mobj = null;
    }
}