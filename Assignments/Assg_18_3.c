// Input : N : 6 NO: 66
// Elements :85 66 3 66 93 88 
// Output : 3

// Input : N : 6 NO: 12 
// Elements :85 11 3 15 11 111
// Output : -1 

#include<stdio.h>
#include<stdlib.h>
int LastOcc(int Arr[], int iLength, int iNo) {
// Logic 
int iCnt =0, iIndex= 0,iCount = 0;
for(iCnt = 0; iCnt < iLength; iCnt++)
{
    if(Arr[iCnt] == iNo)
    {
        iCount++;
        iIndex = iCnt;
    }
    
}
if(iCount == 0)
{
    return -1;
}
return iIndex;
}
int main() {
int iSize = 0,iCnt = 0, iValue = 0,iRet = 0; 
int *p = NULL;
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
iRet = LastOcc(p, iSize,iValue); 
if(iRet == -1)
{
printf("There is no such number\n");
} else {
printf("Last occurrence of number is %d\n",iRet); 
}
free(p);
return 0; }