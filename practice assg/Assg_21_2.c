// 2. Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital. In other cases display as it is.
// Input : Q
// Output q
// Input : m
// Output : M
// Input : 4
// Output: 4
// Output: %
// Input : %

#include<stdio.h>
void Display(char ch)
{
// Logic
if(ch >= 65 && ch <=90)
{
    printf("Output : %c\n",ch+32);
}
else if(ch>=97 && ch <= 122)
{
    printf("Output : %c\n",ch-32);
}
else{
    printf("Output : %c\n",ch);
}

}
int main()
{
char cValue = '\0';
printf("Enter the character : "); 
scanf("%c",&cValue);
Display(cValue);
return 0; 
}
