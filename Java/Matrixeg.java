import java.util.Scanner;

class Matrix
{
    public int Arr[][];
    public Matrix(int row, int col)
    {
        Arr = new int[row][col];
    }


    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements:");
            for(int i = 0; i< Arr.length; i++)
            {
                for(int j = 0 ; j < Arr.length ;j++)
                {
                    Arr[i][j] = sobj.nextInt();
                }
            }
    }

    public void Display()
    {
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

    void TargetedPlot()
    {
        int i = 0, j = 0, iMax = 0, row = 0, col = 0, iSum = 0;

        for(i = 1; i< Arr.length - 1; i++)
        {
            for(j= 1 ;j < Arr.length - 1 ;j++)
            {
                iSum = Arr[i-1][j-1]+ Arr[i-1][j]+ Arr[i-1][j+1]+ Arr[i][j-1]+ Arr[i][j+1]+ Arr[i+1][j-1]+ Arr[i+1][j]+Arr[i+1][j+1];
                if(iSum> iMax)
                {
                    iMax = iSum;
                    row = i;
                    col = j;
                }
                iSum = 0;
            }
        }
        System.out.println("Purchase plot with row:"+row+"Column:"+col);
        System.out.println("Density of trees around plot:+iMax");
        System.out.println("purchaes:"+Arr[row][col]);
    }
}
public class Matrixeg {
    
    public static void main(String arg[]) {
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter no of rows:");
        int rows = sobj.nextInt();

        System.out.println("Enter number of col:");
        int columns = sobj.nextInt();

        Matrix mobj = new Matrix(rows, columns);

        mobj.Accept();;
        mobj.Display();

       
        mobj.TargetedPlot();;

    }
}
      
