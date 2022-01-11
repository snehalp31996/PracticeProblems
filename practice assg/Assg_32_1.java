import java.util.Scanner;

// 1. Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.
// Input : N : 6
// Elements :85 66 3 80 93 88
// Output : 53 (234 - 181) 
class ArrayDemo {
public int Difference(int Arr[], int n) {
int iSum1 = 0, iSum2 = 0, iDiff = 0;

for(int i = 0; i< n; i++)
{
    if(Arr[i] % 2 == 0)
    {
        iSum1 = iSum1 + Arr[i];
    }
    else{
        iSum2 = iSum2 + Arr[i];
    }
}
iDiff = iSum1 - iSum2;
return iDiff;
}
}

public class Assg_32_1 {
    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        int iValue1 = 0, iRet = 0;
        
        
          
        System.out.println(("Enter Input:"));
        iValue1 = sc.nextInt();
        int[] array = new int[iValue1];

        System.out.println("ENter "+iValue1+" numbers:");
        for(int i = 0; i< iValue1; i++)
        {
            array[i] = sc.nextInt();
        }

        ArrayDemo demo = new ArrayDemo();

        iRet = demo.Difference(array, iValue1);

        System.out.println("Difference between summation of even and odd elemets : "+iRet);

    }
}
