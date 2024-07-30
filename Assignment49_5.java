//Write a program which accept matrix from user and 
// Check whether it is Sparse matrix or not
//Sparse Matric is a matric with majority elements equal to zero

// InPut:  1    0   3   0
//         0    6   0   0
//         0    0   1   0
//         9    0   0   9

// outpur: true


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

    public boolean ChkSparse()
    {
        int i = 0, j = 0, iCnt = 0, iCnt1 = 0;
        

        if(iRow != iCol)
        {
            System.out.println("To Check whether Identity Matrix or not we need square matrix");
            System.out.println("Please enter No of rows and columns equal.");
            return false;
        }

        for(i =0; i<iRow;i++)       
        {
            for(j =0; j< iCol; j++)
            {
                if (Arr[i][j] == 0) 
                { 
                    iCnt++;
                }
                else
                {
                    iCnt1++;
                }                       
            }
        }

        if(iCnt > iCnt1)
        {
            return true;
        }
        else
        {
            return false;
        }        
    }   
   

}


class Assignment49_5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;
        boolean bRet = false;

        System.out.println("Enter Number of rows: ");
        int No1 = sobj.nextInt();

        System.out.println("Enter Number of Columns: ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1, No2);

        mobj.Accept();
        mobj.Display();

        bRet = mobj.ChkSparse();
        if(bRet == true)
        {
            System.out.println("Matrix is Sparse Matrix");
        }
        else
        {
            System.out.println("Matrix is not Sparse Matrix");
        }
        
        mobj = null;
    }
}