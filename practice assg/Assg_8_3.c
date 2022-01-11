#include<stdio.h>
int RangeSum(int iStart , int iEnd) {
// Logic 
int iSum = 0, iCnt = 0;

if(iStart < 0 || iEnd < 0)
{
    return 0;
}
else{
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
    }
}
int main() {
int iValue1 = 0, iValue2 = 0, iRet =0;
printf("Enter starting point:"); 
scanf("%d",&iValue1);
printf("Enter ending point:"); 
scanf("%d",&iValue2);
iRet = RangeSum(iValue1, iValue2);
if(iRet == 0)
{
    printf("Invalid Range\n");
}
else{
printf("Addition is %d\n",iRet);
}
return 0;
 }