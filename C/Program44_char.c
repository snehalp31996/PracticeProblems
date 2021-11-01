#include<stdio.h>
void Pattern(int iNo) {
// Logic 
char ch ='a';
int iCnt =0;
for (iCnt = 1; iCnt <= iNo; iCnt++)
{
    printf("%c\t",ch);
    ch++;
}
printf("\n");
}
int main() {
int iValue = 0;
printf("Enter number of elements:"); 
scanf("%d",&iValue);
Pattern(iValue);
return 0; }