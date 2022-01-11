import java.util.*;

class Searching
{

    public boolean LinearSearch(int Arr[], int no)
    {
        int i  = 0;

        for(i = 0; i < Arr.length;i++)
        {
            if(Arr[i] == no){
                break;
            }
        }

        if(i == Arr.length)
        {
            return false;
        }
        else{
            return true;
        }
    }
}
class Program22_linearsearch
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
        Searching obj = new Searching();

        System.out.println("Enter element to search:");
        int no = sobj.nextInt();

        System.out.println("ENter data is");

        for(int i = 0; i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }

        boolean bret = obj.LinearSearch(Arr, no);

        if(bret == true)
        {
            System.out.println("Elememt present");
        }
        else
        {
            System.out.println("Elememt not present");
        }

    }
}