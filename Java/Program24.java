import java.util.*;

class Searching
{

    public void Change(int Arr[], int no)
    {
        for(int i =0; i < Arr.length;i++)
        {
            Arr[i]++;
        }
        
    }
}
class Program24
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

        
        Searching obj = new Searching();

        System.out.println("Enter element to search:");
        int no = sobj.nextInt();

      

        obj.Change(Arr, no);
    
        System.out.println("Data after functioon call");
        
        for(int i = 0; i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}