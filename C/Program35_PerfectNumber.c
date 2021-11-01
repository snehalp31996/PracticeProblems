#include<stdio.h>
#include<stdbool.h>
int SumFactor(int);
bool CheckPerfect(int);
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter Number:");
    scanf("%d",&iValue);
    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("Number is a Perfect Number\n");
    }
    else
    {
        printf("Number is not Perfect Number\n");
    }

    return 0;
}
bool CheckPerfect(int iNo){
    int iNumber = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iNumber = SumFactor(iNo);
    if(iNumber == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1 ;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0){
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;
}
