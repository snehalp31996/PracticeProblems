#include<stdio.h>

int Count(int);

int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);
    iRet = Count(iValue);
    printf("Count is: %d\n",iRet);
    return 0;
}

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo == 0){   //filter
        return 1;
    }

    if(iNo < 0)     //Input updator
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt = iCnt + 1;
        iNo = iNo /10;
    }
    return iCnt;
}