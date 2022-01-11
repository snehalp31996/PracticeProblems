#include<stdio.h>

// struct student
// {
//     char *name;
// };
// struct student s[2];

// void main()
// {

//     s[0].name = "alan";
//     s[1] = s[0];
//     printf("%s%s",s[0].name,s[1].name);
//     s[1].name = "turing";
//     printf("%s%s",s[0].name,s[1].name);
    
// }

int main()
{

    union jumble
    {
        int j1;
        float j2;
        char j3[3];
    }ju = {1,5,'7'};

    union jumble juu;

    juu.j2 = 4;
    ju.j1 = 2;
    printf("%d",ju.j1+juu.j2+ju.j3);
    return 0;

}