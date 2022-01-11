// 1. Write a program which accept string from user and copy that characters of that string into another string in reverse order.
// Input : “Marvellous Python”
// Output : “nohtyP suollevraM”
#include<stdio.h>
void StrCpyRev(char *src, char *dest) {
// Logic 
int j = 0, i =0;
char *start,*end,temp;
while(*src !='\0'){

    src ++;
    i ++;
    
}
i--;
end = src;
start = src;
for (j = 0; j < i; j++)
{
temp   = *end;
*end   = *start;
*start = temp;
start++;
end--;
}

}

int main() {
char arr[30] = "Marvellous Python"; 
char brr[30]; // Empty string
StrCpyRev(arr,brr);
printf("%s",brr); // nohtyP suollevraM
return 0; 
}