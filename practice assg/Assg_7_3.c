#include<stdio.h>
int KMtoMeter(int iNo) {
// Logic 
int iMet = 0;

iMet = iNo * 1000;

return iMet;
}

int main() {
int iValue = 0, iRet = 0;
printf("Enter distance:"); 
scanf("%d",&iValue);
iRet = KMtoMeter(iValue); 
printf("Distance in Meter:%d\n",iRet);
return 0;
}