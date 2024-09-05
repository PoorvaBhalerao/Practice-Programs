//File handling
//open file and read data

import java.io.*;// for File class
import java.util.*;

class program510
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
            System.out.println("Data From file is: "+Arr);// the data we read is in bytes format but we want to display string
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}