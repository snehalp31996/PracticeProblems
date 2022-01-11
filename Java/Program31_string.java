import java.util.Scanner;

public class Program31_string {

    public static void main(String str[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string:");
        String s = sobj.nextLine();
        System.out.println("Entered STring:"+s);
        System.out.println("Length is :"+s.length());

        String s1 = s.trim();   //trim start and end
        System.out.println("New string:"+s1);
        System.out.println("Length of new String is:"+s1.length());

        String s2 = s.replace(" ", ""); //replace all spaces
        System.out.println("New string:"+s2);
        System.out.println("Length of new String is:"+s2.length());

        
        String s3 = s1.replace("[ ]{2,}", " "); // replaces 2 spaces
        System.out.println("New string:"+s3);
        System.out.println("Length of new String is:"+s3.length());

        System.out.println("Enter new String");
        String ss = sobj.nextLine();

        String ss2 = ss.trim().replace("[ ]{2,}"," ");
        System.out.println("New string:"+ss2);
        System.out.println("Length of new String is:"+ss2.length());


        String Arr[] = ss2.split(" ");

        for(int i = 0; i< Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
        
        System.out.println("Length of string:"+Arr.length);
    }
}
