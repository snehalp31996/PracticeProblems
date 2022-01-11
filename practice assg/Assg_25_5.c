// 5. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).
// Input : “Welcome to” “the world Snehal”
// Output : “Welcome to the world Snehal”
#include<stdio.h>
// 5. Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).
// Input : “Welcome to” “the world Snehal”
// Output : “Welcome to the world Snehal”
#include<stdio.h>
void StrCatX(char *src, char * dest) {
// Filter
while(*src != '\0') {
// Logic 
src ++;
}

while(*dest != '\0')
{
    *src = *dest;
    src++;
    dest++;
}
*src = '\0';
}
int main() {
// Traverse first string till end
// Copy contents of destination in source
char arr[50] = "Welcome to"; 
char brr[30] = "the World";
StrCatX(arr,brr);
printf("%s\n",arr); // Marvellous Infosystems Logic Building
return 0; 
}


