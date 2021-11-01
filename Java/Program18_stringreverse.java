

import java.util.*;

class StringX
{
    public String str;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("ENter String:");
        str = sobj.nextLine();

    }

    public void Display()
    {
        System.out.println("Strig is :"+str);

    }
}

class StringDemo extends StringX
{
    public String ReverseX()
    {
        char Arr[] = str.toCharArray();
        int  iStart = 0;
        int jEnd = (Arr.length-1);
        char temp;
        while(iStart<jEnd)
        {
            temp = Arr[iStart];
            Arr[iStart] = Arr[jEnd];
            Arr[jEnd] = temp;

            iStart++;
            jEnd--;
        }
        
        // return new String(Arr);
        return String.valueOf(Arr);
        // return Arr,Ti
        
    }
}

class Program18_stringreverse {

    public static void main(String arg[])
    {
        StringDemo mobj = new StringDemo();
        int iRet = 0;

        mobj.Accept();       
        mobj.Display();
        String s = mobj.ReverseX();
        System.out.println("Reverse String : "+s);
    }
}

