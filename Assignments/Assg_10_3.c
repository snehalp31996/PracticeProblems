// Input : iRow = 3 iCol = 5
// Output: 5 4 3 2 1 
//         5 4 3 2 1 
//         5 4 3 2 1

#include<stdio.h>
void Pattern(int iRow, int iCol) {
// Logic 
int iCnt1 = 0, iCnt2 =0;
for(iCnt1 = 1; iCnt1<=iRow; iCnt1++)
{
    for(iCnt2 = iCol; iCnt2>0; iCnt2--)
    {
        printf("%d\t",iCnt2);
    }
    printf("\n");
}
}
int main() {
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns:"); 
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0; 
}