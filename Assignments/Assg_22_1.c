// 1.Write a program which accept string from user and count number of capital characters.
// Input : “Marvellous Multi OS”
// Output : 4
#include<stdio.h>
int CountCapital(char *str) {
int iCnt = 0; // Filter
while(*str != '\0') {
// Logic 
if(*str >= 65 && *str<= 90)
{
    iCnt++;
    
}
str++;
}
return iCnt ;
 }

int main() {
char arr[20]; 
int iRet = 0;
printf("Enter string:"); 
scanf("%[^'\n']s",arr);
iRet = CountCapital(arr);
printf("%d\n",iRet);
return 0; 
}

