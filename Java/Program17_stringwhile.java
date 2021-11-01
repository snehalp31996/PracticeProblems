

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
    public int CountVowels()
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0, i = 0;
        while(i < Arr.length)
        {
            if((Arr[i] =='a') || (Arr[i] =='e') || (Arr[i] =='i') || (Arr[i] =='o') || (Arr[i] =='u'))
            {
                iCnt++;
            }
            i++;
        }
        return iCnt;
    }
}

class Program17_stringwhile {

    public static void main(String arg[])
    {
        StringDemo mobj = new StringDemo();
        int iRet = 0;

        mobj.Accept();       
        mobj.Display();
        iRet = mobj.CountVowels();
        System.out.println("Number of vowels :"+iRet);
    }
}

