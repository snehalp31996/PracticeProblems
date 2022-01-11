// 1. Write Java program which accept String from user and display below pattern.
// Input : Hello
// Output: H e l l o 
//         H e l l o 
//         H e l l o 
//         H e l l o
    
import java.util.Scanner;

class Pattern {
    public void letterPattern(String str) 
    {
    // Logic 
        int i = 0, j =0;
        
        char ch[] = str.toCharArray();
        
        for(i = 0; i < ch.length; i++)
        {
            
            for(j = 0; j < ch.length; j++)
            {
                
                System.out.print(ch[j]+" ");
                
            }
            
            System.out.println();
        }
    }
    }
    
class Assg_38_1 {
        public static void main(String arg[])
        {
            Scanner sc = new Scanner(System.in);
            
            String word;
            
            System.out.println("Enter String:");
            word = sc.nextLine();
    
            
    
            Pattern pat = new Pattern();
    
            pat.letterPattern(word);
      
            
            
        }
    }
    


