// 3. Write Java program which accept N numbers from user and display all such elements which are even and divisible by 5.
// Input : N : 6 
// Elements :85 66 3 80 93 88
// Output : 80 
import java.util.*;
class ArrayDemo {

public void Display(int Arr[], int n) {
// Logic 

System.out.println("NUmbers divisible by 5 and 2:");

for(int i = 0; i< n; i++)
{
    if(Arr[i] % 5 == 0 && Arr[i] % 2 == 0)
    {
        System.out.println(Arr[i]+"\t");
    }
}

}
}
public class Assg_32_3 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        int iValue1 = 0;
        
        
          
        System.out.println(("Enter Input:"));
        iValue1 = sc.nextInt();
        int[] array = new int[iValue1];

        System.out.println("ENter "+iValue1+" numbers:");
        for(int i = 0; i< iValue1; i++)
        {
            array[i] = sc.nextInt();
        }

        ArrayDemo demo = new ArrayDemo();

        demo.Display(array, iValue1);

       

    }  
}
