//File handling
//create file ,try to open two files one existing one non existing
// copy the contents from one file to other

import java.io.*;// for File class
import java.util.*;

class program516
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------File Packer Unpacker CUI Module--------------");

        System.out.println("Enter the source file name: ");
        String source = sobj.nextLine();

        System.out.println("Enter the destination file name: ");
        String destination = sobj.nextLine();

        File sourceobj = new File(source);

        if(sourceobj.exists())
        {
            File destobj = new File(destination);

            boolean bRet = destobj.createNewFile();
            if(bRet == false)
            {
                System.out.println("Unable to create new file");
                return;
            }

            FileInputStream fiobj = new FileInputStream(source);
            FileOutputStream foobj = new FileOutputStream(destination);

            byte Buffer[] = new byte[1024];
            int iRet = 0;

            while((iRet = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer, 0 , iRet);
            }
        }
        else
        {
            System.out.println("Unable to do operation as file not exits");
        }       
    }
}