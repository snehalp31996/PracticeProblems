#include<iostream>

using namespace std;

int AdditionI(int Arr[],int iSize)
{
    int iSum = 0, i = 0;

    // for(i = 0; i< iSize; i++)
    // {
    //     iSum = iSum + Arr[i];
    // }

    
    while(i < iSize)
    {
        iSum = iSum + Arr[i];
        i++;
    }

    return iSum;

}

int AdditionR(int Arr[],int iSize)
{
    static int iSum = 0, i = 0;

    if(i < iSize)
    {
        iSum = iSum + Arr[i];
        i++;
        AdditionR(Arr, iSize);
    }
    return iSum;

}

int main()
{
    int iLength = 0, i = 0, iRet = 0;
    int *p = NULL;

    cout<<"ENter no. of elements:";
    cin>>iLength;

    p = new int[iLength];

    cout<<"ENter numbers:";
    for( i = 0;i<iLength;i++)
    {
        cin>>p[i];
    }
    iRet = AdditionR(p,iLength);

    cout<<"Summation is:" <<iRet <<"\n";

    delete []p;
    return 0;
}