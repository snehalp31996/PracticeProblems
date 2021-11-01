#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
// #include<io.h>  // windows command
#include<fcntl.h>


int main()
{

    int fd = 0;  //(file descriptor)
    
    fd = creat("NewFile.txt",0777);

    if(fd == -1)
    {
        printf("Unabe to create file\n");

    }
    else{
        printf("File succesfully created\n");
    }
    
    
    return 0;
}