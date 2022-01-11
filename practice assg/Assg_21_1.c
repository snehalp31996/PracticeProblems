// 1. Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
#include<stdio.h>
void DisplayASCII()
{
// Logic
    char ch = '\0';
    int idec = 0;
    ch = 0;
    printf("Dec\tChar\tOctal\tHex\n");
    while(idec != 128)
    {
        printf("%d\t%c\t%o\t%X\n",idec,ch,idec,idec);
        idec++;
        ch++;
    }
}
int main()
{
DisplayASCII();
return 0; }