#include<iostream>

using namespace std;

//Iterative function
int FactorialI(int iNo)
{
    int iFact = 1;
    while(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }
    return iFact;
}

//Recursion function

int FactorialR(int iNo)
{
    static int iFact = 1; //preserve

    if(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo --;
        FactorialR(iNo);
    }

    return iFact;
}
int main()
{
    int x = 0, iRet = 0;

    cout<<"ENter number:";
    cin>>x;

    iRet = FactorialR(x);

    cout<<"Factroial is:" <<iRet <<"\n";

    return 0;
}