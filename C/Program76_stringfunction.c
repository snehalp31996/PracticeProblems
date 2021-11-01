#include<stdio.h>

void Dsiplay(char Brr[])
{
    printf("Name is %s\n", Brr);
}
int main()
{

    char Arr[50] ;

    printf("Enter your name:");
    scanf("%[^'\n']s",Arr);
    
    printf("Your entered name: %s\n",Arr);
    Dsiplay(Arr);
    return 0;
}