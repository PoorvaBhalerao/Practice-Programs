//File handling
//Form a header and display it with size
//We need Header size is 100 so to create that we need to add white spaces
// we need only .txt file so add filter
//Create Packed file and write headers to that file

import java.io.*;// for File class
import java.util.*;

class program529
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------File Packer Unpacker CUI Module--------------");

        System.out.println("Enter the name of directory that you want to open: ");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        System.out.println("Enter the name of Packed file that you want to create: ");
        String PackedFile = sobj.nextLine();

        File Packobj = new File(PackedFile);

        boolean bRet = Packobj.createNewFile();

        if(bRet == false)
        {
            System.out.println("Unable to create Packed File");
            return;
        }

        FileOutputStream foobj = new FileOutputStream(Packobj);

        if(fobj.exists())
        {
            int i = 0, j = 0;
            File Arr[] = fobj.listFiles();

            System.out.println("Number of files in directory are: "+Arr.length);
           
            String Header = null;
            
            for(i = 0; i<Arr.length; i++)
            {
                Header = Arr[i].getName();
                if(Header.endsWith(".txt")) // only .txt files are going to packing 
                {
                    Header = Header + " " + Arr[i].length();

                    for(j = Header.length(); j<100; j++)
                    {
                        Header = Header + " ";
                    }
                    System.out.println("Header of file is: ");    
                    System.out.println(Header);

                    System.out.println("Length of Header is : "+ Header.length());

                    foobj.write(Header.getBytes(), 0 , 100);
                }                
            }
        }
        else
        {
            System.out.println("There is no such Directory");
        }
    }
}