#include<stdio.h>

unsigned int strlenX(char *str) // only positive value of strlen
{
    int iCnt = 0;
    if(str == NULL)
        return 0;

    while(*str !='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{

    char Arr[50] ;
    int iRet = 0;
    printf("Enter your String:");
    scanf("%[^'\n']s",Arr);     // 50
    
    iRet = strlenX(Arr);
    printf("Length of String: %d\n",iRet);
    return 0;
}
