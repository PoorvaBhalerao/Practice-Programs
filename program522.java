//File handling
//open folder and display number of files in the folder and display file names from that folder
// and display size of each file 

import java.io.*;// for File class
import java.util.*;

class program522
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

            for(i = 0; i< Arr.length; i++)
            {
                System.out.println("File Name is: "Arr[i].getName()+" 3File size is: "+Arr[i].length());   
            }
        }
        else
        {
            System.out.println("There is no such Directory");
        }
    }
}