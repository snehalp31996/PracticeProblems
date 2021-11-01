#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos)
{
    
    UINT iMask = 0x00000001; 

    if(iPos< 1 || iPos >32)
    {
        return false;
    }
    iMask = iMask << (iPos -1);
    UINT iAns = 0;
    iAns = iNo & iMask;
    // printf("%d",iAns);
    if(iAns == iMask){
        return true;
    }
    else{
    return false;
    }
}
int main()
{
    UINT iValue = 0, iLoc = 0;

    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    printf("Enter number :");
    scanf("%d",&iLoc);

    bRet = CheckBit(iValue,iLoc);
    if(bRet == true)
    {
        printf("%d Bit is On\n",iLoc);
    }
    else{
        printf("%d Bit is Off\n",iLoc);
    }
    return 0;
}