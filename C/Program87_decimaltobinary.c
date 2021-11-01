#include<stdio.h>
void DisplayBinary(int iNo){

int iRem = 0;
    while(iNo !=0){
        iRem = iNo % 2;
        printf("%d\t",iRem);
        iNo = iNo / 2;

    }


}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayBinary(iValue);
    return 0;
}