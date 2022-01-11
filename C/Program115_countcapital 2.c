#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{

int fd = 0,iCnt = 0, iRet= 0, i = 0, iCnt1 = 0;
char fname[20];
char Buffer[10];

printf("ENter file name:");
scanf("%s",fname);

fd = open(fname, O_RDWR);

if(fd == -1)
{
    printf("Unable to open file\n");
    return -1;
}

while ((iRet = read(fd,Buffer,10)) != 0)
{
    for(i = 0; i<iRet; i++)
    {
        if(Buffer[i] >='A' && Buffer[i] <= 'Z')
        {
            iCnt++;
        }
        if(Buffer[i] >='a' && Buffer[i] <= 'z'){
            iCnt1++;
        }
    }
}

printf("total number of Capital letter are: %d\n",iCnt);
printf("total number of Small letter are: %d\n",iCnt1);
close(fd);
return 0;
}