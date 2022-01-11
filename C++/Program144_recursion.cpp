#include<iostream>
using namespace std;

void DisplayI()
{
    int i=0;
    while(i<=4)
    {
        cout<<"test\n";
        i++;
    }
}
void DisplayR()
{
    static int iCnt=0;   //to preserve int i variable
    if(iCnt<=4)
    {
        cout<<"test\n";
        iCnt++;
        DisplayR();
    }
}

int main()
{
    int i = 0;
    DisplayR();
    return 0;

}