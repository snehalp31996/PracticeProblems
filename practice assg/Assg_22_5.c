// 3. Write a program which accept string from user and display it inn reverse order.
// Input : “MarvellouS” 
// Output : “SuollevraM”

#include<stdio.h>
void Reverse(char *str) {
// Logic 
int i = 0, iCnt = 0;
char brr[50];
*brr = *str;
// printf("%c",str[2]);
while (*str != '\0')
{
    i++;
    str++;
}
// printf("%d\n",i);
while(i != 0)
{
    printf("%c",brr[i]);
    i--;
}
printf("\n");
}
int main() {
char arr[20]; int iRet = 0;
printf("Enter string:"); 
scanf("%[^'\n']s",arr);
Reverse(arr);
return 0; 
}