// 5. Write a program which accept one number from user and on its first 4 bits. Return modified number.
// Input : 73 Output : 79

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x0000000F; // 0000    0000    0000    0000    0000    0000   0000   1111
    UINT iAns = 0;
    iAns = iNo | iMask;
    return iAns;
    
}
int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);
    
    printf("MOdified value after on 1st 4 bit from %d : %d\n",iValue,iRet);
    
    return 0;
}