// 4. Write whether a java program which accept string from user and check it contains vowels in it or not.
// Input : “marvellous” 
// False : TRUE

import java.util.*;
class StringDemo {
    public boolean ChkVowel(String str) {

        int iCnt = 0;
        boolean bFlag = false;

        char ch;

        for(int i = 0; i< str.length(); i++)
        {
            ch = str.charAt(i);
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                bFlag = true;
                break;
            }
        }

        return bFlag;
    }
}    
public class Assg_31_4 {
    public static void main(String arg[])
    {

        Scanner sc = new Scanner(System.in);
        String str1;
        boolean bRet = false;
        System.out.println("Enter String:");
        str1 = sc.nextLine();

        StringDemo demo = new StringDemo();

        bRet = demo.ChkVowel(str1);
        if(bRet ==  true)
        {
            System.out.println("String contains vowel");
        }
        else{
            System.out.println("String  does not contain vowel");
        }
        
    }
}    
