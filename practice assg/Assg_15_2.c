// Input : Output:
// iRow = 4 iCol = 4
// * * * # 
// * * # @ 
// * # @ @ 
// # @ @ @

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i =0, j =0, k =0;
    if(iRow != iCol)    
    {
        return;
    }
    for(i = 1; i <=iRow ;i++)
    {
        for (j = i; j <iCol; j++)
        {   
            
            printf("*\t");
          
        }
        printf("#\t");
        for (k = 1; k< i; k++)
        {
        printf("@\t");
      
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