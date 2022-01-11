// 1.Write a program which accept string from user and convert it into lower case.
// Input : “Marvellous Multi OS”
// Output : marvellous multi os
#include<stdio.h>
void strlwrx(char *str) {
// Logic 
while(*str !=0)
{
    if(*str >= 65 && *str <= 90 )
    {
        *str = *str + 32;
    }
str++;
}
}
int main() {
char arr[20];
printf("Enter string:"); 
scanf("%[^'\n']s",arr);
strlwrx(arr);
printf("Modified string is : %s\n",arr);
return 0; 
}