import java.util.*;

class CheckNumber2
{
    public int CountDigit(int iNo1)
    {
        int iDigitCnt =0;
        while(iNo1 != 0)
        {
            iDigitCnt++;
            iNo1 = iNo1 /10;
        }
        return iDigitCnt;
    }

    public int Power(int iDigit, int iDigitCnt)
    {
        int iCnt =0, iProd = 1;
        for(iCnt = 1; iCnt <= iDigitCnt; iCnt++)
        {
            iProd = iProd * iDigit;
        }
        return iProd;
    }

    public boolean CheckArmstrong(int iNo)
    {
        int iTemp = 0, iDigCnt = 0, iDigit = 0, iPower =1;
        int iCnt = 0, iSum = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        iDigCnt = CountDigit(iNo);
        iTemp = iNo;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iPower = Power(iDigit, iDigCnt);
            iSum = iSum + iPower;
            
            iTemp = iTemp / 10;
        }
        if(iSum == iNo)
        {
            return true;   
        }
        else{
            return false;
        }
       

    }
}
class Program7_Armstrong
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        CheckNumber2 cobj = new CheckNumber2();
        bRet = cobj.CheckArmstrong(iValue);

        if(bRet == true)
        {
            System.out.println("Number "+iValue+" is Armstrong");
        }
        else
        {
            System.out.println("Number "+iValue+" is not Armstrong");
        }


    }
}