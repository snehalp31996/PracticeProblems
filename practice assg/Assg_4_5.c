#include<stdio.h>
int FactDiff(int iNo) {
// Logic 
int iCnt =0;
int iSum1 =0;
int iSum2 = 0;
int iAns = 0;
if(iNo < 0)
{
    iNo= -iNo;
}

for(iCnt = 1; iCnt< iNo; iCnt++)
{
    if((iNo % iCnt)  == 0)
    {
        iSum1 = iSum1 + iCnt;
    }
    else
    {
        iSum2 = iSum2 + iCnt;
    }
}
iAns = iSum1 - iSum2;
return iAns;
}

int main() {
int iValue = 0; 
int iRet = 0;
printf("Enter number"); 
scanf("%d",&iValue);
iRet = FactDiff(iValue);
printf("%d\n",iRet);
return 0; 
}