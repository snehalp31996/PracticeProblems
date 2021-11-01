#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    int iMask = 0x00000008;
    int iAns = 0;
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
    int iValue = 0;
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