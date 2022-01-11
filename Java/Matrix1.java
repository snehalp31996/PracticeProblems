import java.util.Scanner;

class Matrix1{
    public static void main(String[] args) {
    
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter no of rows:");
        int rows = sobj.nextInt();

        System.out.println("Enter number of col:");
        int columns = sobj.nextInt();

        int Arr[][] = new int[rows][columns];

        System.out.println("Enter elements:");
        for(int i = 0; i< Arr.length; i++)
        {
            for(int j = 0 ; j < Arr.length ;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Entered Elements:");
        for(int i = 0; i< Arr.length; i++)
        {
            for(int j = 0 ; j < Arr.length ;j++)
            {
                System.out.println(Arr[i][j]+"\t");
                 
            }
            System.out.println();
        }


    }
}
