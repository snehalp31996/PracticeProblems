import java.util.*;
class Program8_ArrayIntro {
    
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0;

        System.out.println("ENter number of elements:");
        iSize = sobj.nextInt();
        
        int Arr[] = new int[iSize];

        System.out.println("Enter numbers:");
        for(iCnt= 0; iCnt < Arr.length; iCnt++ )
        {
            Arr[iCnt]  = sobj.nextInt();
        }
        System.out.println("Entered elements:");
        for(iCnt= 0; iCnt < Arr.length; iCnt++ )
        {
            System.out.println(Arr[iCnt]);
        }

    }
}
