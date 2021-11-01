// Adding n numbers
import java.util.*;
class ArrayDemo{
    public int Addition(int Brr[])
    {
        int iSum = 0, iCnt = 0;

        for(iCnt = 0; iCnt<Brr.length; iCnt++)
        {
            iSum = iSum + Brr[iCnt];
        }
        return iSum;
        
    }
}
class Program9_arrayadd {
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iRet = 0;

        System.out.println("ENter number of elements:");
        iSize = sobj.nextInt();
        //Arr  = (int *)malloc(sizeof(int) * iSize);
        int Arr[] = new int[iSize];

        System.out.println("Enter numbers:");
        for(iCnt= 0; iCnt < Arr.length; iCnt++ )
        {
            Arr[iCnt]  = sobj.nextInt();
        }
       
        ArrayDemo demo = new ArrayDemo();

        iRet = demo.Addition(Arr);

        System.out.println("Addition:"+iRet);
    }
}
