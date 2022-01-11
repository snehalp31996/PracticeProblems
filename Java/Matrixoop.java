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
}
public class Matrixoop {
    
        public static void main(String[] args) {
        
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter no of rows:");
            int rows = sobj.nextInt();
    
            System.out.println("Enter number of col:");
            int columns = sobj.nextInt();
    
            Matrix1 mobj = new Matrix1(rows, columns);

            mobj.Accept();;
            mobj.Display();
    
           
    
    
        }
    }
      
