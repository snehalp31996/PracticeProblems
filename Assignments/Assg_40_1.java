// 1. Write Java program which accept number of rows and number of columns from user and display below pattern.

// Input : iRow=4 iCol=4
// Output: * * * # 
//         * * # * 
//         * # * * 
//         # * * *
    
import java.util.Scanner;

class Pattern {
    public void letterPattern(int iRow, int iCol) 
    {
    // Logic 
        int i = 0, j = 0, k =0;
        if(iRow != iCol)    
    {
        return;
    }
    
        for(i = 1; i <= iRow; i++)
        {
            
            for(j = i; j < iCol; j++)
            {
                
                    System.out.print("* ");    
            }
            System.out.print("# ");
            for(k = 1; k < i; k++)
            {
                
                    System.out.print("* ");    
            }
            System.out.println();
        }
        
    }
}   
class Assg_40_1 {
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
    


