#include<iostream>
using namespace std;

void DisplayI()
{
    int i=0;
    while(i<=4)
    {
        cout<<"Gouri\n";
        i++;
    }
}
void DisplayR()
{
    static int i=0;   //to preserve int i variable
    if(i<=4)
    {
        cout<<"test\n";
        i++;
        DisplayR();
    }
}

int main()
{
    DisplayR();
    return 0;

}