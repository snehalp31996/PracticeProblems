import java.util.*;
// javac Program11_package.java -cp "iCloud Drive/Documents/Snehal/Pune lecture notes/package/MarvellousNumbers"
import MarvellousNumbers.ArrayX;

class NumberDemo extends ArrayX
{
    
    public NumberDemo(int iValue) {
        super(iValue);
        
    }

    public int Add()
    {
        int iSum = 0, iCnt = 0;
        for(iCnt = 0; iCnt< Arr.length;iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}
class Program11_package {
    public static void main(String ar[])
    {
        Scanner sc = new Scanner(System.in);
        int iLen = 0, iRet = 0;

        System.out.println("Enter the size of array:");
        iLen = sc.nextInt();
        NumberDemo demo = new NumberDemo(iLen);
        demo.Accept();
        demo.Display();
        iRet = demo.Add();
        System.out.println("Addition is:"+iRet);
    }
}
