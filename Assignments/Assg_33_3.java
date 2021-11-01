// 3.Write a program which accept number from user and return the count of digits in between 3 and 7.
// Input : 2395 Output : 1
// Input : 1018 Output : 0
// Input : 4521 Output : 2
// Input : 9922 Output : 0
import java.util.*;
class Digit {
    public int CountRange(int iNo) {
    // Logic 
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
     
        if(iDigit > 3 && iDigit< 7)
        {
            iCount++;
  
        }
        iNo = iNo / 10;
    }
    return iCount;
    }
}
public class Assg_33_3 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;
        

        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        Digit cobj = new Digit();
        iRet = cobj.CountRange(iValue);

        
        System.out.println("Count of Digits between 3 and 7: "+iRet);
        
    }
}
