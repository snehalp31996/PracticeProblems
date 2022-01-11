// 5. Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x80000001; // 1000    0000    0000    0000    0000    0000   0000   0001
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
        printf("1st & 32nd Bit is On\n");
    }
    else{
        printf("1st & 32nd Bit is Off\n");
    }
    return 0;
}