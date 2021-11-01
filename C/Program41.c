//Input : 4
//Output : 4    3   2   1
#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for (iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t",iCnt);
        
    }
    

}

int main()
{
    int iValue =0;
    printf("ENter Number:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}