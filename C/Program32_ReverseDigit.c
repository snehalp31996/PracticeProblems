#include<stdio.h>
int ReverseDigit(int iNo) {
// Logic 
int iDigit = 0;
int iRev = 0;


// if(iNo < 0)
//     {
//         iNo = -iNo;
//     }
while (iNo != 0)   //O(N)  where is N is number of digit  (N>=0)
{
    iDigit = iNo % 10;
    iRev = (iRev * 10) + iDigit;
    iNo = iNo / 10;
}
return iRev;
}
int main() {
int iValue = 0; 
int iRet = 0;
printf("Enter number:"); 
scanf("%d",&iValue);
iRet = ReverseDigit(iValue);
printf("%d\n",iRet);
return 0; 
}
