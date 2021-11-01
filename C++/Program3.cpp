#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


using namespace std;
class SolutionFile
{
    public:
    char Fname[30];
    int fd;

    SolutionFile(char * Name)   //Constructor
    {
        cout<<"Inside Constructor\n";
        strcpy(Fname,Name);
        fd = open(Fname,O_RDWR);

    }
    ~SolutionFile() //Destructor
    {
        cout<<"Inside Destructor\n";
        close(fd);
    }

    void Display()
    {
        int iRet = 0;
        char Buffer[10];
        lseek(fd,0,0);
        cout<<"Data from file:\n";
        while((iRet = read(fd,Buffer,10))!=0)
        {
            write(1,Buffer,iRet);
        }
    }

    int CountCapital()
    {
        int iRet = 0, iCnt = 0, i =0;
        char Buffer[10];
        lseek(fd,0,0);
        while((iRet = read(fd,Buffer,10))!=0)
        {
            for(i = 0; i< iRet; i++)
            {
                if((Buffer[i] >='A') && (Buffer[i]<='Z'))
                {
                    iCnt++;
                }
            }
           
        }
        return iCnt;
    }

    int CountSmall()
    {
        int iRet = 0, iCnt = 0, i =0;
        char Buffer[10];
        lseek(fd,0,0);
        while((iRet = read(fd,Buffer,10))!=0)
        {
            for(i = 0; i< iRet; i++)
            {
                if((Buffer[i] >='a') && (Buffer[i]<='z'))
                {
                    iCnt++;
                }
            }
           
        }
        return iCnt;
    }
    int CountDigit()
    {
        int iRet = 0, iCnt = 0, i =0;
        char Buffer[10];
        lseek(fd,0,0);
        while((iRet = read(fd,Buffer,10))!=0)
        {
            for(i = 0; i< iRet; i++)
            {
                if((Buffer[i] >='0') && (Buffer[i]<='9'))
                {
                    iCnt++;
                }
            }
           
        }
        return iCnt;
    }
};
int main(){

    char Name[30];
    int iRet = 0;

    cout<<"Enter name of file:\n";
    cin>>Name;

    SolutionFile sol(Name);

    sol.Display();
    iRet = sol.CountCapital();
    cout<<"Capital Letter are:"<<iRet<<"\n";

    iRet = sol.CountSmall();
    cout<<"Small Letter are:"<<iRet<<"\n";

    iRet = sol.CountDigit();
    cout<<"Digits  are:"<<iRet<<"\n";

    return 0;
}