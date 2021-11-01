#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00000008;
    UINT iAns = 0;
    iAns = iNo & iMask;
    printf("%d",iAns);
    if(iAns == iMask){
        return true;
    }
    else{
    return false;
    }
}
int main()
{
    UINT iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        printf("4th Bit is On\n");
    }
    else{
        printf("4th Bit is Off\n");
    }
    return 0;
}