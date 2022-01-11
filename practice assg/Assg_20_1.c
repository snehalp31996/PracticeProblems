// 1. Accept Character from user and check whether it is alphabet or not (A-Z a-z).
// Input : F
// Output : TRUE
// Input : &
// Output : FALSE
#include<stdio.h>
#define TRUE 1 
#define FALSE 0
typedef int BOOL;
BOOL ChkAlpha(char ch)
{
// Apply condition to check whether it is alphabet or not.
    if(ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
char cValue = '\0';
BOOL bRet = FALSE;
printf("Enter the character:"); 
scanf("%c",&cValue);
bRet = ChkAlpha(cValue);
if(bRet == TRUE)
{
printf("It is Character\n");
} else {
printf("It is not a Character\n"); 
}
return 0; 
}