#include<iostream>

using namespace std;

//Iterative function
int SumI(int iNo)
{
    int iSum = 0;
    while(iNo != 0)
    {
        iSum = iSum + (iNo%10);
        iNo = iNo/10;
    }

    return iSum;
}

//Recursion function

int SumR(int iNo)
{
    static int iSum = 0; //preserve

    while(iNo != 0)
    {
        iSum = iSum + (iNo %10);
        iNo = iNo /10;
        SumR(iNo);
    }

    return iSum;
}
int main()
{
    int x = 0, iRet = 0;

    cout<<"ENter number:";
    cin>>x;

    iRet = SumR(x);

    cout<<"Summation of digits:" <<iRet <<"\n";

    return 0;
}