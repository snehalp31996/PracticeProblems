import java.util.Scanner;

// 1. Write a java program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user.
// Note : If third parameter is greater than the size of second string then concat whole string after first string.
// Input : Welcome to the World  “of Programming Language ”
// 5
// Output : “Welcome to the world of Pr”
class StringDemo {
public String StrNCatX(String src, String dest, int iCnt) {

    char ch;
    src = src + " ";
    for(int i = 0; i< iCnt; i++)
    {
        ch = dest.charAt(i);
        src = src + ch;
    }

    return src;
}
}
public class Assg_35_1 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        String str1, str2 ,str3;
        int n = 0;

        System.out.println("Enter 1st String:");
        str1 = sc.nextLine();

        System.out.println("Enter 2nd String:");
        str2 = sc.nextLine();

        System.out.println("Enter value of N:");
        n = sc.nextInt();

        StringDemo demo = new StringDemo();
        str3 = demo.StrNCatX(str1, str2, n);
        
        System.out.println("Concatenated String: "+str3);
    }
}
