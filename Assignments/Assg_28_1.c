// 1.Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

// Input : 79 
// Output : 15
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040; // 0000    0000    0000    0000    0000    0000   0100   0000
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
    
    printf("MOdified value after 7th bit off from %d : %d\n",iValue,iRet);
    
    return 0;
}