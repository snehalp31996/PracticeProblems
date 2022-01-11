// 3. Write a java program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
// Input : “MarvellouS”
// Output : 6 (8-2)

import java.util.*;

class StringDemo {
    public int CountDiff(String str) 
    {
        int iCount1 = 0, iCount2 = 0, iDiff = 0;
        char ch;

        for(int i = 0; i< str.length(); i++)
        {
            ch = str.charAt(i);
            if(ch >='A' && ch <= 'Z')
            {
                iCount1++;
            }

            if(ch >='a' && ch <= 'z')
            {
                iCount2++;
            }
        }

        iDiff = iCount2 - iCount1;
        return iDiff;

    }

}
public class Assg_31_3 {
    public static void main(String arg[])
    {

        Scanner sc = new Scanner(System.in);
        String str1;
        int iRet = 0;
        System.out.println("Enter String:");
        str1 = sc.nextLine();

        StringDemo demo = new StringDemo();

        iRet = demo.CountDiff(str1);

        System.out.println("Difference between Small and Capital characters : "+ iRet);
    }
}
