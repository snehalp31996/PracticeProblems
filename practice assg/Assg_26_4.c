// 4. Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case.
// Input : “Marvellous Python 2”
// Output : “marvellous python 2”
#include<stdio.h>
void StrCpySmall(char *src, char *dest) {
// Logic 
while (*src != '\0')
{
    if(*src >= 'A' && *src <= 'Z')
    {
        *dest = *src+32;
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
char arr[30] = "Welcome to the World"; 
char brr[30]; // Empty string
StrCpySmall(arr,brr);
printf("%s\n",brr); 
return 0; 
}