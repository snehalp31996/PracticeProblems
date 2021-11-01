// 2. Write Java program which accept String from user and display below pattern.
// Input : Output:
// Hello
// H e l l o 
// H e l l *
// H e l * * 
// H e * * * 
// H * * * *

import java.util.Scanner;

class Pattern {
    public void letterPattern(String str) 
    {
    // Logic 
        int i = 0, j =0, k = 0;
        
        char ch[] = str.toCharArray();
        
        for(i = 0; i < ch.length; i++)
        {
            k = 0;
            for(j = ch.length; j > 0; j--)
            {
                
                if(i < j){
                    System.out.print(ch[k]+" ");
                    k++;
                }
                else{
                    System.out.print("* ");
                }
                
                
            }
            
            System.out.println();
        }
    }
    }
    
class Assg_39_2 {
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
    

