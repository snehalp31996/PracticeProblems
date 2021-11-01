// 5. Write a java program which accept string from user and display it in reverse order.
// Input : “MarvellouS”
// Output : “SuollevraM”
import java.util.*;
class StringDemo {
public void Reverse(String str) {

    char ch;
    String temp = "";

    for(int i = 0; i< str.length();i++){
        ch = str.charAt(i);
        temp = ch + temp;
    }
    System.out.println("Reversed String: "+ temp);
    }
}

class Assg_31_5{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        String str1;
        
        System.out.println("Enter String:");
        str1 = sc.nextLine();

        StringDemo demo = new StringDemo();

        demo.Reverse(str1);
        
        
    }
}