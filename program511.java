//File handling
//open file and read data

import java.io.*;// for File class
import java.util.*;

class program511
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
            String str = new String(Arr);   // converting byte array to string
            System.out.println("Data From file is: "+str);
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}