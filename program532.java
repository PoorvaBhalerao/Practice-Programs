//File handling- Unpacking activity
//Open packed File Name and read data from that file(read first files header)

import java.io.*;// for File class
import java.util.*;

class program532
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
        
        FileInputStream fiobj = new FileInputStream(fobj);

        byte Header[] = new byte[100];

        fiobj.read(Header);

        System.out.println("Header of first file is: ");

        String H = new String(Header);

        System.out.println(H);
    }
} 