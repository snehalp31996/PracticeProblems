// 5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// Input : 2395
// Output : -15 (2 - 17)
import java.util.*;
class Digit {
public int CountDiff(int iNo) {
    int iDigit = 0, iDiff = 0,iSum1 = 0, iSum2 = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
       
        }
        else{
            iSum2 = iSum2 + iDigit;
     
        }
       
        iNo = iNo / 10;
    }
    iDiff = iSum1 - iSum2;
    return iDiff;
}
}


public class Assg_33_5 {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;
        

        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        Digit cobj = new Digit();
        iRet = cobj.CountDiff(iValue);

        
        System.out.println("Difference between even and odd digits: "+iRet);
        
    }
}
