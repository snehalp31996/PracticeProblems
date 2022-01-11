// 2. Write Java program which accept number of rows and number of columns from user and display below pattern.
// Input : iRow=4 iCol=4
// Output: A B C D 
//         a b c d 
//         A B C D 
//         a b c d
import java.util.Scanner;

class Pattern {
    public void letterPattern(int iRow, int iCol) 
    {
    // Logic 
        int i = 0, j = 0;
        char ch1 = 'A', ch2= 'a';
    
        for(i = 0; i < iRow; i++)
        {
            ch1 = 'A';
            ch2 = 'a';
            for(j = 0; j < iCol; j++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(ch1+" ");
                ch1++;
                }
                else{
                    System.out.print(ch2+" ");
                ch2++;
                }
                
            }
            System.out.println();
        }
    }
    }
    
class Assg_36_2 {
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
    
