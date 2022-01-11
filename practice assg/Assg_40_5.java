// Input: Output:
// iRow=4 iCol= 4
// 1 2 3 4 5 
// 1 2     5 
// 1   3   5 
// 1     4 5 
// 1 2 3 4 5



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
            if(i == 1 || i ==iRow){
                System.out.print(j+"\t");   
            }
            else if(i == j) 
            {  
                System.out.print(j+"\t");   
            }
            else if(j == 1 || j == iCol) 
            {  
                System.out.print(j+"\t");   
            }         
            else{
                System.out.print("\t");
            }
                 
        }
        System.out.println();
        
    }
        
    }
}   


class Assg_40_5 {
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
  
