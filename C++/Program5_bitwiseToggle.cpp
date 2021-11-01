#include<iostream>
/*

    op1 op2 &   |   ^
    1   0   0   1   1
    0   1   0   1   1
    1   1   1   1   0
    0   0   0   0   0
*/

// iNO  0000    0000    1110    0100    1111    0100    1011    1010
//iPos  6
//iRet  0000    0000    1110    0100    1111    0100    1001    1010


//position = 5

// iMask = 0   0   0   0   0   0   0   1
// iMask = iMask(5-1)
//iMask = iMask << 5
//iMask =   0   0   0   0   0   0   0   1

// Input:   0   1   1   0   0   1   0   0
// iMask :  0   0   0   1   0   0   0   0
//Output:   0   1   1   1   0   1   0   0

typedef unsigned int UINT;

using namespace std;

UINT TogglBit(UINT iNo, int iPos)
{
    int iMask = 0x00000001;
    int iResult;
    if((iPos < 1) || (iPos > 32))
    {
        return 0;
    }

    iMask = iMask <<(iPos -1);

    iResult = iNo ^ iMask;
    return iResult;


};
int main()
{

    int iValue = 0, iRet = 0, iLoc = 0;

    cout<<"Enter number:";
    cin>>iValue;

    cout<<"ENter position of bit:";
    cin>>iLoc;
    iRet = TogglBit(iValue,iLoc);

    cout<<"Output after ToggleBit:"<<iRet<<"\n";

    return 0;
}