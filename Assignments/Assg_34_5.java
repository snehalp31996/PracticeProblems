// 5. Write java program which accept N numbers from user and return product of all odd elements.
// Input : N : 6
// Elements :15 66 3 70 10 88
// Output : 45
import java.util.*;
class Number {
    public int Product(int Arr[], int n) {
    // Logic 
    int iProd = 1;
    for(int i = 0; i < n ; i++){
        
        if(Arr[i] % 2 != 0)
        {
            iProd = iProd * Arr[i];
        }
        
        
    }
    return iProd;
    }
}
public class Assg_34_5 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        int iValue1 = 0, iStart = 0, iEnd = 0, iRet= 0;
        
        System.out.println("Enter  no of elements:");
        iValue1 = sc.nextInt();
        
        int[] Arr = new int[iValue1];
        System.out.println("ENter "+iValue1+" Elements:");
        for(int i = 0; i < iValue1; i++)
        {
            Arr[i] = sc. nextInt();
        }

        Number demo = new Number();
  
        iRet = demo.Product(Arr,iValue1);

        System.out.println("Product of odd Elements:"+iRet);
    }
}
