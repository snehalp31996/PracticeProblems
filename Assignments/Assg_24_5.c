// 5. Write a program which accept string from user reverse that string in place.
// Input : “abcd” 
// Output : “dcba”
#include<stdio.h>
void StrRevX(char *str) {
// Logic 
int iCnt = 0, i = 0;
char *start, *end, temp;
    while(*str !='\0')
    {
        iCnt++;
        str++;
        // printf("%c\n", *str);
        // printf("%c\n",str[1]);
    }

   start = str; 
   end   = str;
 
   for (i = 0; i < iCnt - 1; i++)
   {
      end++;
   }
   for (i = 0; i < iCnt/2; i++)
   {        
      temp   = *end;
      *end   = *start;
      *start = temp;
 
      start++;
      end--;
   }
    
}
  
int main() {
char arr[20];
printf("Enter string:"); 
scanf("%[^'\n']s",arr);
StrRevX(arr);
printf("Modified string is %s",arr);

return 0; 
}