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

UINT TogglBit(UINT iNo)
{
    UINT iMask1 = 0xF000000F;
    UINT iResult;
   
    iResult = iNo ^ iMask1;
    return iResult;


}
int main()
{

    UINT iValue = 0, iRet = 0;

    cout<<"Enter number:";
    cin>>iValue;

    // cout<<"ENter position1 of bit:";
    // cin>>iLoc1;
    // cout<<"ENter position2 of bit:";
    // cin>>iLoc2;
    iRet = TogglBit(iValue);

    cout<<"Output after ToggleBit:"<<iRet<<"\n";

    return 0;
}