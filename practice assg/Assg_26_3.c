// 3. Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case.
// Input : “Marvellous Python 2”
// Output : “MARVELLOUS PYTHON 2”
#include<stdio.h>
void StrCpyCap(char *src, char *dest) {
// Logic 
while (*src != '\0')
{
    if(*src >= 'a' && *src <= 'z')
    {
        *dest = *src-32;
        dest ++;
        src ++;
    }
    else if(*src == ' ')
    {
        *dest = *src;
        src ++;
        dest ++;
    }
    else{
        *dest = *src;
        dest ++;
        src ++;
    }

}
*dest = '\0';
}
int main() {
char arr[30] = "Welcome to the world"; 
char brr[30]; // Empty string
StrCpyCap(arr,brr);
printf("%s",brr); 
return 0; 
}