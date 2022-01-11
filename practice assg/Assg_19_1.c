// Input : N : 6 
// Elements :85    66  3   66  93  88
// Output : 93

#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[], int iLength) {
// Logic 
int iCnt = 0;
int iMax = Arr[0];
for(iCnt = 0;iCnt < iLength; iCnt++)
{
    if(Arr[iCnt] > iMax)
    {
        iMax = Arr[iCnt];
    }
}
return iMax;
}
int main() {
int iSize = 0,iRet = 0,iCnt = 0; 
int *p = NULL;
printf("Enter number of elements:"); 
scanf("%d",&iSize);

p = (int *)malloc(iSize * sizeof(int));
if(p == NULL) {
printf("Unable to allocate memory");
return -1; 
}
printf("Enter %d elements",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++) {
printf("Enter element : %d :",iCnt+1);
scanf("%d",&p[iCnt]); 
}
iRet = Maximum(p, iSize);
printf("Largest Number is %d \n",iRet);
free(p);
return 0; 
}