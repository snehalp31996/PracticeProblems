// 3.Write a program which accept string from user and toggle the case. 
// Input : “Marvellous Multi OS”
// Output : mARVELLOUS mULTI os
#include<stdio.h>
void strtogglex(char *str) {
// Logic 
while(*str !=0)
{
    if(*str >= 65 && *str <= 90 )
    {
        *str = *str + 32;
    }
    else if(*str >= 97 && *str <= 122 )
    {
        *str = *str - 32;
    }
    else {
        
    }
str++;
}
}
int main() {
char arr[20];
printf("Enter string:"); 
scanf("%[^'\n']s",arr);
strtogglex(arr);
printf("Modified string is : %s\n",arr);
return 0; 
}