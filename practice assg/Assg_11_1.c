// Input : Output:
// iRow = 4 iCol = 4
// A B C D 
// A B C D 
// A B C D 
// A B C D
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch ='\0';
  
    for(i = 1; i<=iRow;i++)
    {
        for (j = 1, ch='A'; j <= iCol; j++,ch++)
        {   
            printf("%c\t",ch);  
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