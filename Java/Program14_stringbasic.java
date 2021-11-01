import java.util.*;

class StringDemo{
    public void Display(String Data)
    {
        System.out.println("Welcome "+Data);
    }
}
class Program14_stringbasic {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str;

        System.out.println("ENter your name:");
        str = sobj.nextLine();

        StringDemo demo = new StringDemo();
        demo.Display(str);
        System.out.println("Hello "+str);
    }
}