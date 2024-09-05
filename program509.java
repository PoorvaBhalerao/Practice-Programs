//File handling
//open file and write into file

import java.io.*;// for File class
import java.util.*;

class program509
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
            FileOutputStream foobj = new FileOutputStream(fobj);

            String str = "Marvellous";
            byte Arr[] = str.getBytes();
            foobj.write(Arr);            
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}