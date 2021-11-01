// Input:      N:  6
// Elements : 8225     665     3   76    953    858
// Output: 17   17  3   13  17  21

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength) {
// Logic 
int iCnt = 0, iDigit = 0, iNo = 0,iCount = 0, iSum = 0;


for(iCnt = 0;iCnt < iLength; iCnt++)
{   
    iCount =0;
    iSum = 0;
    iNo = Arr[iCnt];
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        
    }
    printf("%d\t",iSum);
    
    
}

}

int main() {
int iSize = 0,iCnt = 0; 
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
DigitsSum(p, iSize);
free(p);
return 0; 
}