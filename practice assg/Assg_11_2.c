// Input : iRow = 4 iCol = 4
// Output: 
// A B C D 
// a b c d 
// A B C D 
// a b c d
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 ='\0', ch2 ='\0';
  
    for(i = 1; i<=iRow;i++)
    {
        for (j = 1,ch1='A',ch2='a' ; j <= iCol; j++)
        {   
            if(i % 2 == 0)
            {
                printf("%c\t",ch2++);
            }
            else
            {
                printf("%c\t",ch1++);
            }
              
        }
        
    printf("\n");
    }
   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of Row :");
    scanf("%d",&iValue1);
    printf("Enter number of Columnn :");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}