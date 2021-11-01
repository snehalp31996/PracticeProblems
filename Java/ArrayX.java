package MarvellousNumbers;
// javac ArrayX.java -d .

import java.util.*;

public class ArrayX
{
    public int Arr[];  // reference to array. no memory allocation

    public ArrayX(int iSize)//constructor - helps to allocate memory
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        System.out.println("Enter elements:");
        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Entered elements:");
        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}