// 3. Write java program which accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.
// Input :
// N : 6
// NO: 66 
// Elements :85 66 3 66 93 88
// Output : 3
import java.util.*;
class Number {

    public int LastOcc(int Arr[],int n, int iNo) {

    int index = -1;    
    for(int i = (n-1); i >= 0; i--){
        
        if(Arr[i] == iNo)
        {
            index = i;
            break;

        }
        
        
    }
    return index; 

    }
}
public class Assg_34_3 {
    
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0, iRet = 0;
        
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
  
        iRet = demo.LastOcc(Arr,iValue1,iValue2);
        
        System.out.println("Last Occurance:"+iRet);
        
        
    }
}
