#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
// #include<io.h>  // windows command
#include<fcntl.h>


int main()
{

    int fd = 0, iRet = 0;  //(file descriptor)
    
    char Fname[30];
    char Data[] = "Welcome to File Manipulation";

    printf("ENter file name:");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unabe to OPEN file\n");
        return -1;
    }
    else{
        printf("File succesfully OPENED WITH FD: %d \n",fd);
    }
    
    iRet = write(fd,Data,15);

    printf("%d bytes gets successfully wriiten in the file\n",iRet);



    
    return 0;
}