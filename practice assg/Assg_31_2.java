// 2. Write a java program which accept string from user and count number of small characters.
// Input : “Marvellous”
// Output : 9
import java.util.*;
class StringDemo {
    public int CountSmall(String str) {
        int iCount = 0;
        char ch;

        for(int i = 0; i< str.length(); i++)
        {
            ch = str.charAt(i);
            if(ch >='a' && ch <= 'z')
            {
                iCount++;
            }
        }
        return iCount;
    }
    }
public class Assg_31_2 {
    public static void main(String arg[])
    {

        Scanner sc = new Scanner(System.in);
        String str1;
        int iRet = 0;
        System.out.println("Enter String:");
        str1 = sc.nextLine();

        StringDemo demo = new StringDemo();

        iRet = demo.CountSmall(str1);

        System.out.println("Number of Small characters : "+ iRet);
    }
}
