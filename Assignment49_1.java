//Write a program which accept matrix from user and 
// and Display transpose of matrix.
//The transpose of given matrix is formed by interchanging rows and columns of matrix

// InPut:  3   2   5   9
//         4   3   2   2
//         8   4   1   5
//         3   9   7   5

// outpur: 3    4   8   3
//         2    3   4   9
//         5    2   1   7   
//         9    2   5   5

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

    public void Transpose()
    {
        int i = 0, j = 0, temp = 0, temp1 = 0;

        if(iRow != iCol)
        {
            System.out.println("Unable to perform Transpose of Matrix");
            System.out.println("Please enter No of rows and columns equal");
            return;
        }

        for(j = 0; j<iCol; j++)        
        {
            for(i = 0; i<iRow; i++)
            {
                System.out.print(Arr[i][j]+ "\t");
            }
            System.out.println();
        }

    }

    
   

}


class Assignment49_1
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

        System.out.println("Elements Before Transpose of matrix: ");
        mobj.Display();

        System.out.println("Elements After Transpose of matrix: ");
        mobj.Transpose();
        
        
        mobj = null;
    }
}