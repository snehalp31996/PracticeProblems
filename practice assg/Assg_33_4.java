// 4.Write a program which accept number from user and return multiplication of all digits.
// Input : 2395 Output : 270
// Input : 1018 Output : 8
// Input : 9440 Output : 144
// Input : 922432 Output : 864
import java.util.*;
class Digit {
    public int Multiply(int iNo) {
    // Logic 
    int iDigit = 0, iProd = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
     
        iProd = iProd * iDigit;
        iNo = iNo / 10;
    }
    return iProd;
    }
}
public class Assg_33_4 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;
        

        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        Digit cobj = new Digit();
        iRet = cobj.Multiply(iValue);

        
        System.out.println("Mutiplication of digits: "+iRet);
        
    }
}
