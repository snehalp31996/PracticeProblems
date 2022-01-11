import java.util.*;

class Searching
{

    public boolean BinarySearch(int Arr[], int no)
    {
        int start , end, mid;
        start = 0;
        end = Arr.length -1;
        mid = (start + end)/2;

        while(start <= end)
        {
            if(Arr[mid] == no)
            {
                break;
            }
            else if(no > Arr[mid])
            {
                start = mid + 1;

            }
            else if(no < Arr[mid])
            {
                end = mid - 1;
            }
            mid = (start + end) / 2;
        }
        if(Arr[mid] == no)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
}
class Program23_Binarysearch
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

        boolean bret = obj.BinarySearch(Arr, no);

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