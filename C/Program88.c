#include<stdio.h>

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    printf("It's Decimal format is : %d\n",iValue);
    printf("It's Octal format is : %o\n",iValue);
    printf("It's Hexadecimal format is : %x\n",iValue);
    return 0;
}