// 2. Write Java program which accept String from user and display below pattern.
// Input : 
// Hello
// Output:
// H e l l o 
// H e l l * 
// H e l * * 
// H e * * * 
// H * * * * 
// H e * * * 
// H e l * * 
// H e l l * 
// H e l l o

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
        for(i = 0; i < ch.length; i++)
        {
           
            for(j = 0; j < ch.length; j++)
            {
                
                if(i >= j){
                    System.out.print(ch[j]+" ");
                }
                else{
                    System.out.print("# ");
                }
                
                
            }
            
            System.out.println();
        }
    }
    }
    
class Assg_39_4 {
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
    


