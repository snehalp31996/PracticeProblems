#include<iostream>
/*

    op1 op2 &   |   ^
    1   0   0   1   1
    0   1   0   1   1
    1   1   1   1   0
    0   0   0   0   0
*/


typedef unsigned int UINT;

using namespace std;

UINT TogglBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0x00000001;
    UINT iResult;
   
   if((iPos1 < 1) || (iPos1 > 10) || (iPos2 < 1) || (iPos2 > 10))
    {
        return 0;
    }
    iMask1
    iResult = iNo ^ iMask1;
    return iResult;


}
int main()
{

    UINT iValue = 0, iRet = 0, iLoc1 = 0, iLoc2 =0;

    cout<<"Enter number:";
    cin>>iValue;

    cout<<"ENter position1 of bit:";
    cin>>iLoc1;
    cout<<"ENter position2 of bit:";
    cin>>iLoc2;
    iRet = TogglBit(iValue);

    cout<<"Output after ToggleBit:"<<iRet<<"\n";

    return 0;
}