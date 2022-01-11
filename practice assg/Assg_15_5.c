// Input: Output:
// iRow=4 iCol= 4
// 1 2 3 4 5 
// 1 2     5 
// 1   3   5 
// 1     4 5 
// 1 2 3 4 5


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
            if(i == 1 || i ==iRow)
            {
                printf("%d\t",j);
            }

            else if(i == j) 
            {  
                printf("%d\t",j);  
            }  
            else if(j == 1 || j == iCol)
            {
                printf("%d\t",j);
            }
            else{
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