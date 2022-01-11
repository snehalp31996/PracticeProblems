#include<iostream>
using namespace std;


//specific function
void Swap(char *p, char *q)
{

char temp;
temp = *p;
*p = *q;
*q = temp;

}

template <class T>
//Generic function
void SwapX(T *p, T *q)
{
T temp;

temp = *p;
*p = *q;
*q = temp;

}

int main()
{
    char x = 'A', y = 'B';
    SwapX(&x,&y);
    cout<<"Value of x :"<<x<<"\n";
    cout<<"Value of y :"<<y<<"\n";

int i = 11, j = 21;
    SwapX(&i,&j);

    cout<<"Value of x :"<<i<<"\n";
    cout<<"Value of y :"<<j<<"\n";

    return 0;
}