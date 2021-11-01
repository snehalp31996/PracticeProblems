#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    int iMask = 0x00100000;
    int iAns = 0;
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        printf("21st Bit is On\n");
    }
    else{
        printf("21st Bit is Off\n");
    }
    return 0;
}