
//Accept two dimentional array.(No of rows and columns) and display
//Display Summation of all indices of matrix


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

    public int Summation()
    {
        int iSum = 0, i = 0, j = 0;
        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j< iCol; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }

}

class program572
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows: ");
        int No1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1, No2); 

        mobj.Accept();
        mobj.Display();
        
        int iRet = 0;
        iRet = mobj.Summation();
        System.out.println("Summation of all elements of array is: "+iRet);

    }
}