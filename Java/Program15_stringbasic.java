import java.util.*;

class StringX
{
    public String str;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("ENter String:");
        str = sobj.nextLine();

    }

    public void Display()
    {
        System.out.println("Strig is :"+str);

    }
}
class Program15_stringbasic {

    public static void main(String arg[])
    {
        StringX sobj = new StringX();
        sobj.Accept();
        sobj.Display();
    }
}
