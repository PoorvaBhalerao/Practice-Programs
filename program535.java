//File handling-
//accept sring and display length of string and removing white spaces again display lengtth of string
//str.trim()

import java.io.*;// for File class
import java.util.*;

class program535
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        System.out.println("Length of string is: "+str.length());

        str = str.trim();       //removes all white spaces

        System.out.println("Length of string is: "+str.length());
    }
} 