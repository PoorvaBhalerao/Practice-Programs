//File handling
//create new file

import java.io.*;// for File class
import java.util.*;

class program505
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------File Packer Unpacker CUI Module--------------");

        System.out.println("Enter File name that you want to create: ");
        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        boolean bRet = fobj.createNewFile();

        if(bRet == false)
        {
            System.out.println("Unable to create file");
        }
        else
        {
            System.out.println("File is created successfully");
        }
    }
}