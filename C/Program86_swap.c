#include<stdio.h>
#include<stdbool.h>

void Swap(char *p, char *q)
{
    char temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    char ch1, ch2;
    printf("ENter charatcter 1:");
    scanf("%c",&ch1);
    printf("ENter charatcter 1:");
    scanf(" %c",&ch2);

    printf("BEfore swapping %c  %c\n",ch1,ch2);

    Swap(&ch1,&ch2);
    printf("AFTER swapping %c  %c\n",ch1,ch2);
}