// 3. Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.
// Input : 137 
// Output : 201
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040; // 0000    0000    0000    0000    0000    0000   0100   0000
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

    iRet = ToggleBit(iValue);
    
    printf("MOdified value after 7th bit toggle from %d : %d\n",iValue,iRet);
    
    return 0;
}