#include<iostream>
/*

    op1 op2 &   |   ^
    1   0   0   1   1
    0   1   0   1   1
    1   1   1   1   0
    0   0   0   0   0
*/


using namespace std;

int CountBit(int iNo)
{
    int iMask = 0x00000001;
    int i = 0, iCnt = 0, iResult = 0;

    for(i = 1; i < 32; i++) //  for(i = 1; i < 32; i++, iMask)
    {
        iResult = iNo & iMask;
        if(iResult !=0) // if(iResult == iMask)
        {
            iCnt++;
        }
        iMask = iMask << 1;


    }

return iCnt;
}

int main()
{

    int iValue = 0, iRet = 0;

    cout<<"Enter number:";
    cin>>iValue;

    iRet = CountBit(iValue);

    cout<<"No. of bits which are ON:"<<iRet<<"\n";

    return 0;
}