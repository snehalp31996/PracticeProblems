import java.util.*;


class Program20
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("ENter size of array:");
        int size = sobj.nextInt();

        int Arr[] = new int[size];

        System.out.println("ENter the elements:");

        for(int i = 0; i < Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("ENter data is");

        for(int i = 0; i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}