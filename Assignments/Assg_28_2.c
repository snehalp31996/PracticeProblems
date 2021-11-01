// 2. Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.
// Input : 577 
// Output : 1
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000240; // 0000    0000    0000    0000    0000    0010   0100   0000
    UINT iAns = 0;
    iAns = iNo ^ iMask;
    return iAns;
    
}
int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);
    
    printf("MOdified value after 7th and 10th bit off from %d : %d\n",iValue,iRet);
    
    return 0;
}