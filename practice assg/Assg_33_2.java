// 2.Write a program which accept number from user and return the count of odd digits.
// Input : 2395 Output : 3
// Input : 1018 Output : 2
// Input : -1018 Output : 2
// Input : 8462 Output : 0
import java.util.*;
class Digit {
    public int CountOdd(int iNo) {
    // Logic 
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
     
        if(iDigit % 2 != 0)
        {
            iCount++;
  
        }
        iNo = iNo / 10;
    }
    return iCount;
    }
}
public class Assg_33_2 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;
        

        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        Digit cobj = new Digit();
        iRet = cobj.CountOdd(iValue);

        
        System.out.println("Count of Odd Digits "+iRet);
        
    }
}
