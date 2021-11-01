// Enter number of Row :5
// Enter number of Columnn :5
// *   
// *   *   
// *   *   *
// *   *   *   *

#include<stdio.h>
void Display(int iRow, int iCol)
{
    int Cnt = 0;

    int i =0, j =0;
    if(iRow != iCol)    // filter for not square
    {
        return;
    }
    for(i = 1; i<=iRow;i++)
    {
        for (j = 1; j <= iCol; j++)
        {   Cnt++;
            if(i >= j)
            {
                printf("*\t");
            }
          
        }
        
    printf("\n");
    }
    printf("%d\n",Cnt);
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of Row :");
    scanf("%d",&iValue1);
    printf("Enter number of Columnn :");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}