#include<stdio.h>
int CountEven(int iNo) {
// Logic 
int iDigit = 0;
int iCnt = 0;
if(iNo < 0)
    {
        iNo = -iNo;
    }
while (iNo != 0)
{
    iDigit = iNo % 10;
    if(iDigit % 2 == 0){
        iCnt++;
    }
    iNo = iNo / 10;
}
return iCnt;
}
int main() {
int iValue = 0; 
int iRet = 0;
printf("Enter number:"); 
scanf("%d",&iValue);
iRet = CountEven(iValue);
printf("%d\n",iRet);
return 0; 
}
