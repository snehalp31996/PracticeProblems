// 4. Write a program which accept one number and position from user and toggle that bit. Return modified number.
// Input : 10 3 Output : 14


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
    
    UINT iMask = 0x00000001; 

    if(iPos< 1 || iPos >32)
    {
        return false;
    }
    iMask = iMask << (iPos -1);
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

    printf("Enter location :");
    scanf("%d",&iLoc);

    iRet = ToggleBit(iValue,iLoc);
    printf("MOdified value after %d  bit off from %d : %d\n",iLoc,iValue,iRet);
    return 0;
}