//File handling
//Form a header and display it with size
//We need Header size is 100 so to create that we need to add white spaces

import java.io.*;// for File class
import java.util.*;

class program526
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
            int i = 0, j = 0;
            File Arr[] = fobj.listFiles();

            System.out.println("Number of files in directory are: "+Arr.length);
           
            for(i = 0; i<Arr.length; i++)
            {
                String Header = Arr[i].getName();
                Header = Header + " " + Arr[i].length();

                for(j = Header.length(); j<100; j++)
                {
                    Header = Header + " ";
                }
                System.out.println("Header of file is: ");    
                System.out.println(Header);

                System.out.println("Length of Header is : "+ Header.length());
            }
        }
        else
        {
            System.out.println("There is no such Directory");
        }
    }
}