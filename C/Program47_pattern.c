// Enter number of rows and columns:3
// 3
// 1       2       3
// 1       2       3
// 1       2       3
#include<stdio.h>
void Display(int iRow, int iCol)
{

    int i =0, j =0;
    for(i = 1; i<=iRow;i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t",j);
        }
        
    printf("\n");
    }
    
}
int main() {
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns:"); 
scanf("%d %d",&iValue1, &iValue2);
Display(iValue1, iValue2);
return 0; 
}