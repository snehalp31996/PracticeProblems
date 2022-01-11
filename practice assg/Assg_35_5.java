// 5. Accept string from user and check whether the string is palindrome or not without considering its case.
// Input : “1abccBA1” Output : TRUE
import java.util.*;
class StringDemo {
public boolean StrPallindrome(String str) {
    
        boolean bflag = false;
        char ch1;
        String temp = "";
    
        for(int i = 0; i< str.length();i++){
            ch1 = str.charAt(i);
            temp = ch1 + temp;
        }

        for(int j = 0;j< str.length();j++){

            if(temp.charAt(j) == str.charAt(j)){
                bflag = true;
            }
            else{
                bflag = false;
            }
        }
        
    return bflag;
}
}
public class Assg_35_5 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        String str1;
        boolean bRet = false;
        System.out.println("Enter  String:");
        str1 = sc.nextLine();


        StringDemo demo = new StringDemo();
  
         bRet = demo.StrPallindrome(str1);
         if(bRet ==  true){
             System.out.println("String is Pallindrome ");
         }
         else{
             System.out.println("String is not Pallindrome");
         }
        
    }
}
