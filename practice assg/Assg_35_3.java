// 3. Write a program which 2 strings from user and check whether first N contents of two strings are equal or not.
// Note : If third parameter is greater than the size of second string then concat whole string after first string.
// Input : “Marvellous Infosystems” “Marvellous Logic Building”
// 10 Output : TRUE
import java.util.*;
class StringDemo {
    public boolean StrNCmpX(String src, String dest ,int iCnt) {
    
    
    int ilen = 0, iCnt1 = 0, iCnt2 = 0;
    
    for(int i = 0; i< iCnt; i++)
    {
        
        if(src.charAt(i) == dest.charAt(i))
        {
            iCnt1++;
        }
        else{

            iCnt2++;
        }
            
    }
   
    if(iCnt1 != iCnt)
    {
        return false;
    }
    else{
        return true;
    }
    }
}
public class Assg_35_3 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        String str1, str2;
        boolean bRet = false;
        int n = 0;

        System.out.println("Enter 1st String:");
        str1 = sc.nextLine();

        System.out.println("Enter 2nd String:");
        str2 = sc.nextLine();

        System.out.println("Enter value of N:");
        n = sc.nextInt();


        StringDemo demo = new StringDemo();
        bRet = demo.StrNCmpX(str1, str2, n);
        if(bRet ==  true){
            System.out.println("String are equal");
        }
        else{
            System.out.println("String are not equal");
        }
    }
    
}
