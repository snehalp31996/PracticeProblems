import java.util.Scanner;

class Marvel
{
    public String wordReverse(String str)
    {
        String s2 = str.trim().replace("[ ]{2,}"," ");
        // System.out.println("New string:"+s2);
        // System.out.println("Length of new String is:"+s2.length());
        String Arr[] = s2.split(" ");
        System.out.println("No of words in string:"+Arr.length);

        // find length of largest word

        String output = null;
        int iMax = Arr[0].length();
        for(String str1: Arr)
        {
            if(str1.length() > iMax){
                iMax = str1.length();
                output = str1;
            }

        }
        
        System.out.println("Largest word:"+output+" with length:"+iMax);

        StringBuffer out = new StringBuffer(" ");
        for(String str1 : Arr)
        {
            StringBuffer soj = new StringBuffer(str1);
            out = out.append(soj.reverse());
            out = out.append(" ");
        }

        String ret = new String(out);
        return ret.trim();
    }
}
public class Program32_string {

    public static void main(String arg[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter string:");
        String s = sobj.nextLine();
        // System.out.println("Entered STring:"+s);
        // System.out.println("Length is :"+s.length());

        Marvel mobj = new Marvel();

        String ret = mobj.wordReverse(s);
        
        // reverse words in place
        System.out.println("Output is:"+ret);
    }
}
