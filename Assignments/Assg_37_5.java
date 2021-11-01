// 3. Write Java program which accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 3 iCol = 4
// Output: 1 1 1 1 
//         2 2 2 2 
//         3 3 3 3 
//         4 4 4 4
    
import java.util.Scanner;

class Pattern {
    public void letterPattern(int iRow, int iCol) 
    {
    // Logic 
        int i = 0, j = 0;
        
    
        for(i = 1; i <= iRow; i++)
        {
            
            for(j = 1; j <= iCol; j++)
            {
                
                System.out.print(i+" ");
                
            }
            
            System.out.println();
        }
    }
    }
    
class Assg_37_5 {
        public static void main(String arg[])
        {
            Scanner sc = new Scanner(System.in);
            
            int row = 0, col = 0;
            System.out.println("Enter number of Rows:");
            row = sc.nextInt();
    
            System.out.println("Enter number of Columns:");
            col = sc.nextInt();
    
            Pattern pat = new Pattern();
    
            pat.letterPattern(row, col);
      
            
            
        }
    }
    


