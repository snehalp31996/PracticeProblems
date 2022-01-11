// Input : Output:
// iRow = 6 iCol = 6
// * * * * * * 
// * # # # * * 
// * # # * $ * 
// * # * $ $ * 
// * * $ $ $ * 
// * * * * * *

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
        
        for(j = 1; j <=iCol; j++)
        {
            if(i == 1 || i ==iRow || j == 1 || j == iCol|| j ==(iRow -i +1)){
                System.out.print("* ");   
            }
            else if(j < (iRow-i+1)) 
            {  
                System.out.print("# ");   
            }         
            else{
                System.out.print("$ ");
            }
                 
        }
        System.out.println();
        
    }
        
    }
}   

class Assg_40_4 {
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
    


