// 4. Write a program which accept string from user and copy small characters of that string into another string.
// Input : “Marvellous multi OS”
// Output : “arvellous multi”

#include<stdio.h>
void StrCpySmall(char *src, char *dest) {
// Fileter 
while(*src != '\0') {
if((*src >= 'a') && (*src <='z')) {
*dest = *src;
dest ++;
}
src ++; 
 
}
*dest = '\0'; 
}
int main() {
char arr[30] = "Marvellous Multi OS"; 
char brr[30]; // Empty string
StrCpySmall(arr,brr);
printf("%s\n",brr); // MMOS
return 0; 
}