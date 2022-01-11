#include<iostream>
using namespace std;

void Swap(float *p, float *q)
{

float temp;
temp = *p;
*p = *q;
*q = temp;

}
int main()
{
    float x = 0, y = 0;

    cout<<"ENter first number:";
    cin>>x;

    cout<<"ENter second number:";
    cin>>y;

    Swap(&x,&y);

    cout<<"Value of x :"<<x<<"\n";
    cout<<"Value of y :"<<y<<"\n";

    return 0;
}