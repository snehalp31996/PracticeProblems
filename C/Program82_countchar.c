#include<stdio.h>

int CountFrequency(char *str, char ch){
int iCnt =0;
if(str == NULL){
    return -1;
}

while(*str != '\0'){
    if(*str == ch){
        iCnt ++;
    }
    str++;
}
return iCnt;
}

int main(){
    char Arr[30];
    int iRet =0;
    char cValue ='\0';

    printf("Enter String:");
    scanf("%[^'\n's]",Arr);

    printf("ENter character to search: ");
    scanf(" %c",&cValue); //enter a space before %c to remove the \n character from the above string
    
    iRet = CountFrequency(Arr,cValue);
    printf("FRequency is : %d\n",iRet);
    return 0;

}