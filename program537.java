//File handling- Unpacking activity
//Open packed File Name and read data from that file(Header)
//create new file from header

import java.io.*;// for File class
import java.util.*;

class program537
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
        String HeaderX = new String(Header);
        System.out.println(HeaderX);
        
        HeaderX = HeaderX.trim();   // trim extra white spaces

        String Tokens[] = HeaderX.split(" ");

        System.out.println("File name is: "+Tokens[0]);
        System.out.println("File length is: "+Tokens[1]);

        File obj = new File(Tokens[0]);
        obj.createNewFile();
    }
} 