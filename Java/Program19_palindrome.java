

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
    public boolean CheckPallindrome()
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
        
        String newstr = new String(Arr);
        boolean bRet = newstr.equals(str);
        return bRet;
        
    }
}

class Program19_palindrome {

    public static void main(String arg[])
    {
        StringDemo mobj = new StringDemo();
        int iRet = 0;

        mobj.Accept();       
        mobj.Display();
        boolean bRet = mobj.CheckPallindrome();
        if(bRet == true)
        {
        System.out.println("String is pallindronm");
        }
        else
        {
        System.out.println("String is not pallindronm");
        }
    }
}

