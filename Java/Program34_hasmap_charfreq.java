


import java.util.HashMap;
import java.util.Scanner;

class Marvel
{
    public void charFrequency(String s)
    {
        String s2 = s.replaceAll(" ","");
        System.out.println("string after removing white space:"+s2);

        char Arr[] = s2.toCharArray();

        HashMap<Character,Integer> hobj = new HashMap<Character, Integer>();
        int i = 0;

        for(char ch: Arr)
        {
            if(hobj.containsKey(ch))
            {
                i = hobj.get(ch);
                hobj.put(ch,i+1);
            }
            else{
                hobj.put(ch, 1);
            }
        }

       
        System.out.println("frequency:"+hobj);
        
    }
}
class Program34_hasmap_charfreq
{
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter string:");

        String s = sc.nextLine();
        Marvel obj = new Marvel();

        obj.charFrequency(s);
    }
}