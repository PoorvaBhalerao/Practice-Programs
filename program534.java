//File handling-
//Explaining function to split string

import java.io.*;// for File class
import java.util.*;

class program534
{
    public static void main(String Args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        System.out.println("Number of words are: "+Arr.length);

        int i = 0;
        for(i = 0; i< Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
} 