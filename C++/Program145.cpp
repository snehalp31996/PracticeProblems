#include<iostream>
using namespace std;

void DisplayI(int iNo)
{
    int i=0;
    while(i<=iNo)
    {
        cout<<"test\n";
        i++;
    }
}
void DisplayR(int iNo)
{
    static int iCnt=1;   //to preserve int i variable
    if(iCnt<=iNo)
    {
        cout<<"test\n";
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int i = 5;
    DisplayR(i);
    return 0;

}