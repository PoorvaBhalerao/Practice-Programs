
//Accept two dimentional array.(No of rows and columns) and display
//Display Addition of digits of each element in place of that number ie upodate matrix

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

    protected void finalize()
    {
        System.out.println("garbage collector is collecting the memory of an object");
        Arr = null;
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

    public int Maximum()
    {
        int iMax = 0, i = 0, j = 0;

        iMax = Arr[0][0];

        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j< iCol; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }

    public int Minimum()
    {
        int iMin = 0, i = 0, j = 0;

        iMin = Arr[0][0];

        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j< iCol; j++)
            {
                if(Arr[i][j] < iMin)
                {
                    iMin = Arr[i][j];
                }
            }
        }
        return iMin;
    }

    public void RowSum()
    {
        int i = 0, j = 0, iSum = 0;

        for(i = 0; i< iRow; i++)
        {
            iSum = 0;
            for(j = 0; j< iCol; j++)
            {
                iSum = iSum + Arr[i][j];
            }
            System.out.println("Sum of Row No "+i +" "+"is "+iSum);
        }
    }

    public int DiagonalSum()
    {
        int i = 0, j = 0, iSum = 0;

        if(iRow != iCol)
        {
            System.out.println("Unable to perform addition of diagonal elements");
            System.out.println("Because Matrix is not a square matrix");

            return -1;
        }

        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j< iCol; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }                
            }
        }
        return iSum;
    }

    public int DiagonalSum1()
    {
        int i = 0, j = 0, iSum = 0;

        if(iRow != iCol)
        {
            System.out.println("Unable to perform addition of diagonal elements");
            System.out.println("Because Matrix is not a square matrix");

            return -1;
        }

        for(i = 0; i< iRow; i++)
        {
            for(j = i; (j< iCol) && (i == j); j++)
            {
                iSum = iSum + Arr[i][j];                             
            }
        }
        return iSum;
    }

    public void SumEvenOdd()
    {
        int i = 0, j = 0, iSumEven = 0, iSumOdd = 0;

        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j<iCol ; j++)
            {
                if(Arr[i][j] % 2 == 0)
                {
                    iSumEven = iSumEven + Arr[i][j];
                }                   
                else
                {
                    iSumOdd = iSumOdd + Arr[i][j];
                }
            }
        }   
        System.out.println("Addition of Even Elements: "+iSumEven);
        System.out.println("Addition of odd Elements: "+iSumOdd);
        
    }

    public void UpdateMatrix()
    {
        int i = 0, j = 0;

        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j<iCol ; j++)
            {
                if(Arr[i][j] % 5 == 0)
                {
                    Arr[i][j] = 0;
                }                   
            }
        }
    }

    public void UpdateMatrixToEven()
    {
        int i = 0, j = 0;

        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j<iCol ; j++)
            {
                if(Arr[i][j] % 2 != 0)
                {
                    Arr[i][j] =Arr[i][j] + 1;
                }                   
            }
        }   
    }

    public void AdditionDigits()
    {
        int i = 0, j = 0, iDigit = 0, iSum = 0, iNo = 0;

        System.out.println("Addition of digits: ");
        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j<iCol ; j++)
            {
                iSum = 0;
                iNo = Arr[i][j];
                
                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10;
                }  
                System.out.print(iSum+ "\t");
            }
            System.out.println();
        }   
    }

    public void AdditionDigitsInPlace()
    {
        int i = 0, j = 0, iDigit = 0, iSum = 0, iNo = 0;

        for(i = 0; i< iRow; i++)
        {
            for(j = 0; j<iCol ; j++)
            {
                iSum = 0;
                iNo = Arr[i][j];
                
                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10;
                }  
                Arr[i][j] = iSum;
            }

        }   
    }
}

class program584
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
        // iRet = mobj.Summation();
        // System.out.println("Summation of all elements of array is: "+iRet);

        // iRet = mobj.Maximum();
        // System.out.println("Maximum is: "+iRet);

        // iRet = mobj.Minimum();
        // System.out.println("Minimum is: "+iRet);

        //mobj.RowSum();

        // iRet = mobj.DiagonalSum();
        // System.out.println("Sum of Diagonal Elemensts is: "+iRet);

        // iRet = mobj.DiagonalSum1();
        // System.out.println("Sum of Diagonal Elemensts is: "+iRet);

        //mobj.SumEvenOdd();

        // mobj.UpdateMatrix();
        // mobj.Display();

        // mobj.UpdateMatrixToEven();
        // System.out.println("After Updation:");
        // mobj.Display();

        //mobj.AdditionDigits();

        mobj.AdditionDigitsInPlace();
        mobj.Display();

        mobj = null;

        System.gc();

        


    }
}