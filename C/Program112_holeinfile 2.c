#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{

int fd = 0;
fd = open("lb17.txt",O_RDWR); //Append at end of file

if(fd == -1)
{
    printf("Unable to open file\n");
}
///
/// 0 from starting position
//1 from current position
//2 from end of file
lseek(fd,10,2);

write(fd,"*",1);//fd = 1

close(fd);
return 0;
}