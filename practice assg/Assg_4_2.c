#include<stdio.h>

void FactRev(int iNo) {
// Logic 
int iCnt =0;

if(iNo < 0)
{
    iNo= -iNo;
}

for(iCnt = (iNo-1); iCnt> 0; iCnt--)
{
    if((iNo % iCnt)  == 0)
    {
        printf("%d\n",iCnt);
    }
}


}

int main() {

int iValue = 0;
printf("Enter number"); 
scanf("%d",&iValue);
FactRev(iValue);
return 0; 
}