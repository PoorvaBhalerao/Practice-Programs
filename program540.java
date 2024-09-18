//File handling- Unpacking activity
//Open packed File Name and read data from that file(Header)
//create new file from header and show data from that file from packed file
// unpack all files with data.

import java.io.*;// for File class
import java.util.*;

class program540
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
        int iRet = 0;
        String HeaderX =null;
        File obj = null;
        int FileSize = 0;
        FileOutputStream foobj = null;

        while((iRet =fiobj.read(Header, 0 , 100)) > 0)
        {
            HeaderX = new String(Header);
            HeaderX = HeaderX.trim();
            
            HeaderX = HeaderX.trim();   // trim extra white spaces

            String Tokens[] = HeaderX.split(" ");

            obj = new File(Tokens[0]);
            obj.createNewFile();

            FileSize = Integer.parseInt(Tokens[1]);
            byte Buffer[] = new byte[FileSize];

            fiobj.read(Buffer, 0, FileSize);

            foobj = new FileOutputStream(obj);

            foobj.write(Buffer, 0 , FileSize);

            foobj.close();
        }
        fiobj.close();
    }
} 