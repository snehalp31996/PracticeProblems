// 4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x000001C0; // 0000    0000    0000    0000    0000    0001   1100   0000
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
        printf("7th & 8th & 9th Bit is On\n");
    }
    else{
        printf("7th & 8th & 9th Bit is Off\n");
    }
    return 0;
}