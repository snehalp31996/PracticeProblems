#include<stdio.h>

void Dsiplay(char *Brr)
{
    // int i = 0;
    // printf("%c\n", *Brr);
    // Brr++;
    // printf("%c\n", *Brr);
    // Brr++;
    // printf("%c\n", *Brr);
    // Brr++;
    // printf("%c\n", *Brr);
    // Brr++;
    // printf("%c\n", *Brr);
    // Brr++;
    // while(Brr[i] != '\0')
    // {
    //     printf("%c\n", Brr[i]);
    //     i++;
    // }

    while(*Brr != '\0')
    {
        printf("%c\n", *Brr);
        Brr++;
    }
}
int main()
{

    char Arr[50] ;

    printf("Enter your name:");
    scanf("%[^'\n']s",Arr);     // 50
    
    // printf("Your entered name: %s\n",Arr);
    Dsiplay(Arr);   //Display(50); Name of array is internally considered as its base address
    return 0;
}
