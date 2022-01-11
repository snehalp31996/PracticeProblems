import java.util.*;

// 1. Write java program which accept N numbers from user and accept one another number as NO , check whether NO is present or not.
// Input :
// N : 6
// NO: 66 
// Elements :85 66 3 66 93 88
// Output : TRUE
class Number {
boolean Check(int Arr[], int n,int iNo) {
// Logic 
    boolean bflag = true;
    for(int i = 0; i < n; i++){
        
        if(Arr[i] == iNo)
        {
            bflag = true;
            break;

        }
        else
        {
            bflag = false;
        }
        
    }
    return bflag;
}
}
public class Assg_34_1 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;
        boolean bRet = false;
        System.out.println("Enter  no of elements:");
        iValue1 = sc.nextInt();
        
        int[] Arr = new int[iValue1];
        System.out.println("ENter "+iValue1+" Elements:");
        for(int i = 0; i < iValue1; i++)
        {
            Arr[i] = sc. nextInt();
        }

        System.out.println("ENter element to search:");
        iValue2 = sc.nextInt();
        Number demo = new Number();
  
        bRet = demo.Check(Arr,iValue1,iValue2);
        if(bRet ==  true){
             System.out.println("Element found");
        }
         else{
             System.out.println("Element not found");
        }
        
    }
}
