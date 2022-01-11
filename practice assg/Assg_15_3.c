// Input : Output:
// iRow = 6 iCol = 6
// * * * * * * 
// *       * * 
// *     *   * 
// *   *     * 
// * *       * 
// * * * * * *

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
        for (j = 1; j <=iCol; j++)
        {   
            if(i == 1 || i ==iRow || j == 1 || j == iCol|| j ==(iRow -i +1))
            {
            printf("*\t");
            }

            else  
            {  
                  
                printf("\t");  
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