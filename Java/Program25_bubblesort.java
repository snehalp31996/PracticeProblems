import java.util.*;

class Sorting
{

    public void BUbbleSort(int Arr[])
    {
        int i = 0, j = 0, temp = 0;
        int size = Arr.length;
        for(i =0 ; i < size ; i++)
        {
            for(j = 0 ; j < size - i - 1 ; j++)
            {
                if(Arr[i] > Arr[j+1])
                {
                    temp = Arr[i];
                    Arr [j] = Arr[j+1];
                    Arr[j+1] = temp;
                }
            }
            
        }
        
    }
}
class Program25_bubblesort
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

        
        Sorting obj = new Sorting();

        obj.BUbbleSort(Arr);
    
        System.out.println("Data after Sorting :");
        
        for(int i = 0; i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}