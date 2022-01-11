#include<stdio.h>
int MultDigits(int iNo) {
// Logic 
int iDigit = 0;
int iCnt = 1;

if(iNo < 0)
{
    iNo = -iNo;
}
while(iNo != 0)
{
    iDigit = iNo % 10;
    if (iDigit != 0)
    {
    iCnt = iCnt * iDigit;
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
iRet = MultDigits(iValue);
printf("%d\n",iRet);
return 0; 
}