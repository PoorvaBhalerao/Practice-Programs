//Write a program which accept matrix from user and 
// and Addition of columns.

// InPut:  3   2   5   9
//         4   3   2   2
//         8   4   1   5
//         3   9   7   5

// Output: 18   19  15  21

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

    public void AddColumn()
    {
        int i = 0, j = 0, iSum = 0;

        for(j = 0; j<iCol; j++)
        {
            iSum = 0;
            for(i = 0; i<iRow; i++)
            {
                iSum = iSum + Arr[j][i];
            }
            System.out.print(iSum + "\t");
        }
    }
   

}


class Assignment48_4
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

        mobj.AddColumn();
        
        mobj = null;
    }
}