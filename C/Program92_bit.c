#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00000840; // 0000    0000    0000    0000    0000    1000    0100    0000
                            //  0          0    0           0       0   8       4       0
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
        printf("7th & 12th Bit is On\n");
    }
    else{
        printf("7th & 12th Bit is Off\n");
    }
    return 0;
}