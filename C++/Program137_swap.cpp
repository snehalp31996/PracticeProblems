#include<iostream>
using namespace std;

void Swap(char *p, char *q)
{

char temp;
temp = *p;
*p = *q;
*q = temp;

}
int main()
{
    char x = '\0', y = '\0';

    cout<<"ENter first number:";
    cin>>x;

    cout<<"ENter second number:";
    cin>>y;

    Swap(&x,&y);

    cout<<"Value of x :"<<x<<"\n";
    cout<<"Value of y :"<<y<<"\n";

    return 0;
}