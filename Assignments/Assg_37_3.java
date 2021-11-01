// 3. Write Java program which accept number of rows and number of columns from user and display below pattern.

// Input : iRow = 3 iCol = 5
// Output: 5 4 3 2 1 
//         5 4 3 2 1 
//         5 4 3 2 1
    
import java.util.Scanner;

class Pattern {
    public void letterPattern(int iRow, int iCol) 
    {
    // Logic 
        int i = 0, j = 0;
        
    
        for(i = 1; i <= iRow; i++)
        {
            
            for(j = iCol; j > 0; j--)
            {
                
                System.out.print(j+" ");
                
            }
            
            System.out.println();
        }
    }
    }
    
class Assg_37_3 {
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
    


