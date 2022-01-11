import java.util.Scanner;

class Marvel
{
    public void charFrequency(Strng s)
    {
        String s2 = s.replaceAll(" ","");
        System.out.println("string after removing white space:"+s2);

        char Arr[] = s2.toCharArray();

        for(char ch: Arr)
        {
            System.out.println(ch);
        }
    }
}
class Program33_string
{
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter string:");

        String s = sc.nextLine();
        Marvel obj = new Marvel();

        obj.charFrequency(s);
    }
}