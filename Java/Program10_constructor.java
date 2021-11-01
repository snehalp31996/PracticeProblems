import java.util.*;

class ArrayX
{
    public int Arr[];  // reference to array. no memory allocation

    public ArrayX(int iSize)//constructor - helps to allocate memory
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        System.out.println("Enter elements:");
        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Entered elements:");
        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

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
class Program10_constructor {

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
