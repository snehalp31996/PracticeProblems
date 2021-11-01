import java.util.*;

import MarvellousNumbers.ArrayX;

class NumberDemo extends ArrayX
{
    
    public NumberDemo(int iValue) {
        super(iValue);
        
    }

    public float Average()
    {
        int iSum = 0, iCnt = 0;
        for(iCnt = 0; iCnt< Arr.length;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return (iSum/Arr.length);
    }
}
public class Program12_Avg {
    public static void main(String ar[])
    {
        Scanner sc = new Scanner(System.in);
        int iLen = 0;
        float fRet = 0.0f;

        System.out.println("Enter the size of array:");
        iLen = sc.nextInt();
        NumberDemo demo = new NumberDemo(iLen);
        demo.Accept();
        demo.Display();
        fRet = demo.Average();
        System.out.println("Average is:"+fRet);
    }
}
