#include<stdio.h>

int main()
{

    char Arr[50] ;

    printf("Enter your name:");
    scanf("%[^'\n']s",Arr);
    
    printf("Your entered name: %s\n",Arr);
    return 0;
}