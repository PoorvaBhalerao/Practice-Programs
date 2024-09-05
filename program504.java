//File handling
//create new file

import java.io.*;// for File class
import java.util.*;

class program504
{
    public static void main(String Args[])
    {
        try
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("---------------File Packer Unpacker CUI Module--------------");

            System.out.println("Enter File name that you want to create: ");
            String File_Name = sobj.nextLine();

            File fobj = new File(File_Name);

            fobj.createNewFile();
        }
        catch(Exception eobj)
        {
            System.out.println("Excaption occured"+eobj);
        }
    }
}