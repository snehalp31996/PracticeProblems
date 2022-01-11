// 2. Write a program which 2 strings from user and check whether contents of two strings are equal or not.
// Input : “Marvellous Infosystems” “Marvellous Infosystems”
// Output : TRUE
import java.util.*;
class StringDemo {
public boolean StrCmpX(String src, String dest) {
    
    
    int ilen = 0, iCnt1 = 0, iCnt2 = 0;
    
    for(int i = 0; i< src.length(); i++)
    {
        
        if(src.charAt(i) == dest.charAt(i))
        {
            iCnt1++;
        }
        else{

            iCnt2++;
        }
            
    }
   
    if(iCnt1 != src.length())
    {
        return false;
    }
    else{
        return true;
    }
    }
}
public class Assg_35_2 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        String str1, str2;
        boolean bRet = false;

        System.out.println("Enter 1st String:");
        str1 = sc.nextLine();

        System.out.println("Enter 2nd String:");
        str2 = sc.nextLine();

       

        StringDemo demo = new StringDemo();
        bRet = demo.StrCmpX(str1, str2);
        if(bRet ==  true){
            System.out.println("String are equal");
        }
        else{
            System.out.println("String are not equal");
        }
    }
}
