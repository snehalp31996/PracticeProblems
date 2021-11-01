// Input: iRow=4 iCol= 4
// Output: 
// 1 2 3 4 
//   2 3 4 
//     3 4
//       4

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i =0, j =0, k = 0, l =0;
    if(iRow != iCol)    
    {
        return;
    }
    for(i = 1; i <=iRow;i++)
    {
        k =i;
        for(l = 1 ; l < k; l++)
            {
                printf("\t");
            }
        for (j = 0; j <= (iCol-i); j++)
        {   
           
            printf("%d\t",k);
            k++;

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