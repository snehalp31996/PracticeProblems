
// 5. Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is a group of four bits)


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    
    UINT iMask = 0xF000000F; 

    
    UINT iAns = 0;
    iAns = iNo ^ iMask;
    // printf("%d",iAns);
    return iAns;
}
int main()
{
    UINT iValue = 0, iLoc = 0;

    UINT iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    
    iRet = ToggleBit(iValue);

    printf("MOdified value after toggle 1st and last bit : %d\n",iRet);
    return 0;
}
