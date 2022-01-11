// Input: N: 6
// NO: 66
// Elements: 85    66  3   66  93  88
// Output : TRUE

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1 
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iLength, int iNo) {
// Logic 
int iCnt =0;
for(iCnt = 0; iCnt < iLength; iCnt++)
{
    if(Arr[iCnt] == iNo)
    {
        return TRUE;
    }
}
return FALSE;
}
int main() {
int iSize = 0,iRet = 0,iCnt = 0, iValue = 0; 
int *p = NULL;
BOOL bRet = FALSE;
printf("Enter number of elements:"); 
scanf("%d",&iSize);
printf("Enter the number to search:"); 
scanf("%d",&iValue);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL) {
printf("Unable to allocate memory\n");
return -1; 
}
printf("Enter %d elements ",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++) {
printf("Enter element %d : ",iCnt+1);
scanf("%d",&p[iCnt]); }
bRet = Check(p, iSize,iValue);
if(bRet == TRUE) {
printf("Number is present\n"); }
else {
printf("Number is not present\n"); }
free(p);
return 0; 
}