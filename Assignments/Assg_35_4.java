// 4. Accept sing from user and reverse the contents of that string by toggling the case.
// Input : “aCBdef” Output : “FEDcbA”
import java.util.*;
class StringDemo {
    public void StrRevTogX(String str){
        
        char ch1;
        String temp = "";
    
        for(int i = 0; i< str.length();i++){
            ch1 = str.charAt(i);
            temp = ch1 + temp;
        }

        char ch[] = temp.toCharArray();

       for(int j = 0; j < str.length(); j++)
       {    
           
           if(ch[j] >= 'A' && ch[j] <= 'Z')
           {
               ch[j] = (char) (ch[j] + 32);
               
           }
           else{
               ch[j] = (char) (ch[j] - 32);
           }
           
       }       
       for(int c=0;c<ch.length;c++)
       System.out.print(ch[c]);
        }
    }
public class Assg_35_4 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        String str1, str2;
        
        int n = 0;

        System.out.println("Enter  String:");
        str1 = sc.nextLine();


        StringDemo demo = new StringDemo();
         demo.StrRevTogX(str1);
       
        
        
    }
}
