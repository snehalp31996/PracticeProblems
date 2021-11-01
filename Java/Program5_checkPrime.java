import java.util.*;

class CheckNumber
{
    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
        boolean bFlag = true;

        for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
        {
            if((iNo %iCnt)== 0)
            {
                bFlag = false;
                break;
            }
        }

        return bFlag;
    }  
}
// class CheckNumber
// {
//     public boolean CheckPrime(int iNo)
//     {
//         int iCount = 0, i = 0;
        
//         for(i = 1; i <= iNo; i++)
//         {
//             if(iNo % i == 0)
//             {
//                 iCount++;
//             }
//         }
//         if(iCount == 2)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
       
//     }  
// }
class Program5_checkPrime
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        CheckNumber cobj = new CheckNumber();
        bRet = cobj.CheckPrime(iValue);

        if(bRet == true)
        {
            System.out.println("Number "+iValue+" is Prime");
        }
        else
        {
            System.out.println("Number "+iValue+" is not Prime");
        }


    }
}