// Input: N: 6
// NO: 66
// Elements: 85    66  3   66  93  88
// Output : 2

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength, int iNo) {
// Logic 
int iCnt = 0, iCount =0;

for(iCnt = 0; iCnt <iLength; iCnt++)
{
    if(Arr[iCnt] == iNo)
    {
        iCount++;
    }
}
return iCount;
}
int main() {
int iSize = 0,iRet = 0,iCnt = 0, iValue = 0; 
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
    printf("Enter element : %d :",iCnt+1);
    scanf("%d",&p[iCnt]); 
    }
iRet = Frequency(p, iSize,iValue); 
printf("%d\n",iRet);
free(p);
return 0;
}