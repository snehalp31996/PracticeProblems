// 1.Write a Java program which accept string from user and count number of capital characters.
// Input : “Marvellous Multi OS”
// Output : 4
import java.util.*;
class StringDemo {
public int CountCapital(String str) {

    int iCount = 0;
    char ch;

    for(int i = 0; i< str.length(); i++){
        ch = str.charAt(i);
        if(ch >= 'A' && ch <='Z'){
            iCount++;
        }
    }
   
    return iCount;
}


}
class Assg_31_1{

    public static void main(String arg[])
    {

        Scanner sc = new Scanner(System.in);
        String str1;
        int iRet = 0;
        System.out.println("Enter String:");
        str1 = sc.nextLine();

        StringDemo demo = new StringDemo();

        iRet = demo.CountCapital(str1);

        System.out.println("Number of Capital characters : "+ iRet);
    }
}