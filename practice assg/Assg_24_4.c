// 4.Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
// Input :
// “Marvellous Multi OS” 
// M
// 11

#include<stdio.h>
int LastChar(char *str, char ch) {
// Logic 
int iCnt = 0, i =0, j =-1, k = -1;
// for(i = 0 ; i <)
while(*str != 0)
{
    if(*str == ch)
    {
        j++;
        k = iCnt;
        
    }
    str++;
    iCnt++;
}
if(j > -1)
{
    return k;
}
else
{
    return j;
}
}

int main() {
char arr[20], ch1 ; 
int iRet = 0;


printf("Enter string"); 
scanf("%[^'\n']s",arr);
printf("Enter the character"); 
scanf("%c", &ch1);
iRet = LastChar(arr, ch1);
printf("Character location is %d",iRet);
return 0; 
}