
// 4. Write java program which accept N numbers from user and accept Range, Display all elements from that range
// Input :
// N : 6
// Start: 60 
// End : 90
// Elements :85 66 3 76 93 88
// Output : 66 76 88
import java.util.*;
class Number {

    public void Display(int Arr[], int iStart, int iEnd, int n) {
    // Logic 
     
    for(int i = 0; i < n ; i++){
        
        if(Arr[i] >= iStart && Arr[i]<= iEnd)
        {
            System.out.println(Arr[i]);
        }
        
        
    }
   

    }
}
public class Assg_34_4 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        int iValue1 = 0, iStart = 0, iEnd = 0;
        
        System.out.println("Enter  no of elements:");
        iValue1 = sc.nextInt();
        
        int[] Arr = new int[iValue1];
        System.out.println("ENter "+iValue1+" Elements:");
        for(int i = 0; i < iValue1; i++)
        {
            Arr[i] = sc. nextInt();
        }

        System.out.println("ENter Start element:");
        iStart = sc.nextInt();
        System.out.println("ENter ENd element:");
        iEnd = sc.nextInt();
        Number demo = new Number();
  
        demo.Display(Arr,iStart,iEnd,iValue1);
        
       
        
    }
}
