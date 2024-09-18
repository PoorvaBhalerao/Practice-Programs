//File handling- Unpacking activity
//Open packed File Name

import java.io.*;// for File class
import java.util.*;

class program531
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------File Packer Unpacker CUI Module--------------");

        System.out.println("Enter the name of Packed that you want to open: ");
        String PackedFile = sobj.nextLine();

        File fobj = new File(PackedFile);

        if(!fobj.exists())
        {
            System.out.println("Unable to preceed as PackedFile is missing....");
            return;
        }       
    }
}