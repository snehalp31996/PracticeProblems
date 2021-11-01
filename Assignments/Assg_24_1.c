// 1.Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
// Input :
// Output : Input :
// Output :
// “Marvellous Multi OS” 
// e
// TRUE
// “Marvellous Multi OS” 
// W
// FALSE
#include<stdio.h>
#define TRUE 1 
#define FALSE 0
typedef int BOOL;
BOOL ChkChar(char *str, char ch) {
// Logic 
int i = 0;
while(*str != 0 )
{
    if(*str == ch)
    {
        i++;
    }
    str++;
}
if(i > 0)
{
    return TRUE;
}
else{
    return FALSE;
}
}
int main() {
char arr[50];
char cValue;
BOOL bRet = FALSE;
printf("Enter string:"); 
scanf("%[^'\n']s",arr);

printf("Enter the character:"); 
scanf("%c",&cValue);

bRet = ChkChar(arr, cValue);
if(bRet == TRUE) {
printf("Character found"); }
else {
printf("Character not found"); }
return 0; }
