// 1.Write a java program which accept number from user and return the count of even digits.
// Input : 2395 Output : 1
// Input : 1018 Output : 2
// Input : -1018 Output : 2
// Input : 8462 Output : 4
import java.util.*;
class Digit {
    public int CountEven(int iNo) {
    // Logic 
    int iDigit = 0, iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
       
        if(iDigit % 2 == 0)
        {
            iCount++;
           
        }
        iNo = iNo / 10;
    }
    return iCount;
    }
}
public class Assg_33_1 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;
        

        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        Digit cobj = new Digit();
        iRet = cobj.CountEven(iValue);

        
        System.out.println("Count of Even Digits "+iRet);
        
    }
}
