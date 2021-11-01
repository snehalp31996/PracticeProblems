#include<stdio.h>

int Sum(int);

int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);
    iRet = Sum(iValue);
    printf("Sum is: %d\n",iRet);
    return 0;
}

int Sum(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum  = iSum + iDigit;
        iNo = iNo /10;
    }
    return iSum;
}