// 4. Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
// Input : % 
// Output : TRUE 
// Input : d Output : FALSE
#include<stdio.h>
#define TRUE 1 
#define FALSE 0
typedef int BOOL;
BOOL ChkSpecial(char ch)
{
// Apply condition to check whether it is special or not.
int iCnt = 0;
if(ch >= 33 && ch <=64)
{
    iCnt++;
    
}
if(iCnt != 0)
{
    return TRUE;
}
else
{
    return FALSE;
}
}
int main()
{
char cValue = '\0';
BOOL bRet = FALSE;
printf("Enter the character :"); 
scanf("%c",&cValue);
bRet = ChkSpecial(cValue);
if(bRet == TRUE)
{
printf("It is special Character\n");
} else {
printf("It is not a special Character\n"); }
return 0; }