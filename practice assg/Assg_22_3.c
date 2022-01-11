// 3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
// Input : “MarvellouS”
// Output : 6 (8-2)

#include<stdio.h>
int Difference(char *str) {
int iCnt1 = 0,iCnt2 = 0, iDiff =0; // Filter
while(*str != '\0') {
// Logic 
if(*str >= 97 && *str<= 122)
{
    iCnt1++;
    
}
if(*str >= 65 && *str<= 90)
{
    iCnt2++;
    
}
str++;
}
// printf("%d\n",iCnt1);
// printf("%d\n",iCnt2);
iDiff = iCnt1 - iCnt2;
return iDiff ;
 }

int main() {
char arr[20]; 
int iRet = 0;
printf("Enter string:"); 
scanf("%[^'\n']s",arr);
iRet = Difference(arr);
printf("%d\n",iRet);
return 0; 
}

