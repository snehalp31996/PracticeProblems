// 2. Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
// Input : 10 15 (1010 1111) 
// Output : 2 4
#include<stdio.h>


typedef unsigned int UINT;
void CommonBits(UINT iNo1, UINT iNo2) {
// Logic 
int iCount = 0;
UINT Ans = 0;

while(iNo != 0)
{
    if((iNo & 1) == 1)
    {
        iCount++;
    }
    iNo = iNo >> 1;
}
}
int main()
{
    UINT iValue1 = 0,iValue2 = 0;

    UINT iRet = 0;

    printf("Enter 1st number :");
    scanf("%d",&iValue1);

    printf("Enter 2nd number :");
    scanf("%d",&iValue2);

    CommonBits(iValue1,iValue2);

    printf("Number of ON bits:%d\n",iRet);
    return 0;
}
