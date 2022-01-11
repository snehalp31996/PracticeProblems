// 1.Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)
// Input : “Marvellous Multi OS”
// Output : “Marvellous Multi OS” in another string
#include<stdio.h>
void StrCpyX(char *src, char *dest) {
// Fileter 
while(*src != '\0') {
*dest = *src; 
src++; 
dest++;
}
*dest = '\0';
}
int main() {
char arr[30] = "Heelo World";
char brr[30]; 
StrCpyX(arr,brr); 
printf("%s\n",brr);

return 0;
}