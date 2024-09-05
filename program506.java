//File handling
//open file

import java.io.*;// for File class
import java.util.*;

class program506
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------File Packer Unpacker CUI Module--------------");

        System.out.println("Enter File name that you want to open: ");
        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        if(fobj.exists())
        {
            System.out.println("File is present in the folder");
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}