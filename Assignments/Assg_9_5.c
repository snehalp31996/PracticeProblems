// Input : 8
// Output: 2 4 6 8 10 12 14 16
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt * 2);
        
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