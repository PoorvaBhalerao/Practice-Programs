//File handling
//Form a header and display it with size

import java.io.*;// for File class
import java.util.*;

class program524
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------File Packer Unpacker CUI Module--------------");

        System.out.println("Enter the name of directory that you want to open: ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        if(fobj.exists())
        {
            File Arr[] = fobj.listFiles();

            System.out.println("Number of files in directory are: "+Arr.length);
            int i = 0;

            String Header = Arr[0].getName();
            Header = Header + " " + Arr[0].length();

            System.out.println("Header of first file is: ");    //Demo.txt 10
            System.out.println(Header);

            System.out.println("Length of Header is : "+ Header.length());
        }
        else
        {
            System.out.println("There is no such Directory");
        }
    }
}