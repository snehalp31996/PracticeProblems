#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
// #include<io.h>  // windows command
#include<fcntl.h>


int main()
{

    int fd = 0, iRet = 0;  //(file descriptor)
    
    char Fname[30];
    char Data[8];

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
    
    iRet = read(fd,Data,7);

    printf("%d bytes gets successfully read from the file\n",iRet);


    printf("Data from the file is \n");

    write(1,Data,iRet);
    
    close(fd);
    return 0;
}