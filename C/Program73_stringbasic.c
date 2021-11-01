#include<stdio.h>

int main()
{

    char Arr[11] = "California";

    printf("%c\n",Arr[0]);
    printf("%c\n",Arr[5]);
    printf("%c\n",Arr[9]);
    printf("%s\n",&Arr[0]); // we have to give address for %s // 50
    printf("%s\n",&Arr[5]); // 55
    printf("%s\n",&Arr[9]); // 59
    printf("%s\n",Arr); // gives address
    printf("%s\n",Arr+5);
    printf("%s\n",Arr+9);
    return 0;
}