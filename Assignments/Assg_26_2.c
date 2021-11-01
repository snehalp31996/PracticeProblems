// 2. Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.
// Input : “Marvel lous Pyth on”
// Output : “MarvellousPython”
#include<stdio.h>
void StrCpyX(char *src, char *dest) {
// Logic 
while(*src != '\0')
{
    if(*src == ' ')
    {
        src ++;
    }
    else{
        *dest = *src;
        src ++;
        dest ++;
    }

}
*dest = '\0';

}
int main() {
char arr[30] = "Marvel lous Pyth on";
char brr[30];
StrCpyX(arr,brr); 
printf("%s\n",brr); 
return 0;
}