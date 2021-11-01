#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
// #include<io.h>  // windows command
#include<fcntl.h>


int main()
{

    int fd = 0;  //(file descriptor)
    
    char Fname[30];

    printf("ENter file name:");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unabe to OPEN file\n");

    }
    else{
        printf("File succesfully OPENED WITH FD: %d \n",fd);
    }
    
    
    return 0;
}