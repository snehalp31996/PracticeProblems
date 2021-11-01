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
    return -1;
}
///
/// 0 from starting position
//1 from current position
//2 from end of file

lseek(fd,5,0);

read(fd,Arr,5);
write(1,Arr,5);//fd = 1

printf("\n");

lseek(fd,5,1);

read(fd,Arr,5);
write(1,Arr,5);//fd = 1

printf("\n");
close(fd);
return 0;
}