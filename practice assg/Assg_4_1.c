#include<stdio.h>

int MultFact(int iNo) {
// Logic 
int iCnt =0;
int iProd =1;
if(iNo < 0)
{
    iNo= -iNo;
}

for(iCnt = 1; iCnt< iNo; iCnt++)
{
    if((iNo % iCnt)  == 0)
    {
        iProd = iProd * iCnt;
    }
}

return iProd;

}

int main() {
int iValue = 0; 
int iRet = 0;
printf("Enter number"); 
scanf("%d",&iValue);

iRet = MultFact(iValue);

printf("%d\n",iRet);

return 0; 
}