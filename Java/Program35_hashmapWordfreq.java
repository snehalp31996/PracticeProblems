
import java.util.HashMap;
import java.util.Scanner;

class Marvel
{
    public void wordFrequncyX(String s)
    {
        String s2 = s.trim().replace("[ ]{2,}"," ");
        // s2 = s2.toLowerCase();
        String Arr[] = s2.split(" ");
        System.out.println("No of words in string:"+Arr.length);


        HashMap<String,Integer>  hobj = new HashMap<String,Integer>();

        for(String str: Arr)
        {
            if(hobj.containsKey(str))
            {
                // hobj.put(str,hobj.get(str) +1);  // case sensitive
                hobj.put(str.toLowerCase(),hobj.get(str.toLowerCase()) +1); //case insensitive
            }
            else{
                hobj.put(str.toLowerCase(), 1);
            }
        }
        
        System.out.println("Word Frequency:"+hobj);

    }
    public void wordFrequncy(String s)
    {
        String s2 = s.trim().replace("[ ]{2,}"," ");
        // s2 = s2.toLowerCase();
        String Arr[] = s2.split(" ");
        System.out.println("No of words in string:"+Arr.length);


        HashMap<String,Integer>  hobj = new HashMap<String,Integer>();

        for(String str: Arr)
        {
            if(hobj.containsKey(str))
            {
                hobj.put(str,hobj.get(str) +1);  // case sensitive
                // hobj.put(str.toLowerCase(),hobj.get(str.toLowerCase()) +1); //case insensitive
            }
            else{
                hobj.put(str, 1);
            }
        }
        
        System.out.println("Word Frequency:"+hobj);

    }
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

       
        System.out.println("letter frequency:"+hobj);
        
    }
}
class Program35_hashmapWordfreq
{
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter string:");

        String s = sc.nextLine();
        Marvel obj = new Marvel();

        obj.charFrequency(s);
        obj.wordFrequncy(s);
        obj.wordFrequncyX(s);
    }
}