#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{

int fd = 0;
char Arr[10];
fd = open("lb17.txt",O_RDWR); //Append at end of file

if(fd == -1)
{
    printf("Unable to open file\n");
}

read(fd,Arr,5);

printf("Data from file is:\n");

write(1,Arr,5);//fd = 1
printf("\n");
close(fd);
return 0;
}