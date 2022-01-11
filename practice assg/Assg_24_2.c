// 2.Write a program which accept string from user and accept one character. Return frequency of that character.

#include<stdio.h>
int CountChar(char *str, char ch) {
// Logic 
int iCnt = 0;
while(*str != 0)
{
    if(*str == ch)
    {
        iCnt++;
    }
    str++;
}
return iCnt;
}

int main() {
char arr[20], ch1; 
int iRet = 0;


printf("Enter string"); 
scanf("%[^'\n']s",arr);
printf("Enter the character"); 
scanf("%c", &ch1);
iRet = CountChar(arr, ch1);
printf("Character frequency is %d",iRet);
return 0; 
}
