//File handling
//open file and read data(Not reading full data we have to use buffer array)

import java.io.*;// for File class
import java.util.*;

class program512
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------File Packer Unpacker CUI Module--------------");

        System.out.println("Enter File name that you want to open for writing: ");
        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        if(fobj.exists())
        {
            FileInputStream fiobj = new FileInputStream(fobj);

            byte Arr[] = new byte[20];
            
            fiobj.read(Arr);
            String str = new String(Arr);   
            System.out.println("Data From file is: "+str);

            fiobj.read(Arr);             
            System.out.println("Data From file is: "+str);
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}