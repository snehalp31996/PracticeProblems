import java.util.*;

class Program13_string {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str;

        System.out.println("ENter your name:");
        str = sobj.nextLine();

        System.out.println("Hello "+str);
    }
}