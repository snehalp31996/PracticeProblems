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

UINT TogglBit(UINT iNo, int iPos1, int iPos2)
{
    int iMask1 = 0x00000001, iMask2 = 0x00000001, iMask3 = 0;
    int iResult;
    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2> 32)){
    
        return 0;
    }

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);
    iMask3 = iMask1 | iMask2;
    iResult = iNo ^ iMask3;
    return iResult;


}
int main()
{

    int iValue = 0, iRet = 0, iLoc1 = 0, iLoc2 = 0;

    cout<<"Enter number:";
    cin>>iValue;

    cout<<"ENter position1 of bit:";
    cin>>iLoc1;
    cout<<"ENter position2 of bit:";
    cin>>iLoc2;
    iRet = TogglBit(iValue,iLoc1,iLoc2);

    cout<<"Output after ToggleBit:"<<iRet<<"\n";

    return 0;
}