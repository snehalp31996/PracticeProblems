#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x0000000F; // 0000    0000    0000    0000    0000    0000    0000    1111
                            //  0          0    0           0       0   0       0       15
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
        printf("last 4 Bit is On\n");
    }
    else{
        printf("Bit is Off\n");
    }
    return 0;
}