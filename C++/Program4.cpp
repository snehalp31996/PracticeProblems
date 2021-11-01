#include<iostream>

using namespace std;
class Solution
{
public:
int Addition(int x, int y)
{
    int iAns = 0;
    iAns = x + y;
    return iAns;
}

};
int main(){

int iNo1 = 0, iNo2 = 0, iRet = 0;
    Solution sol;
    cout<<"Enter 1st number:";
    cin>>iNo1;

    cout<<"Enter 2nd number:";
    cin>>iNo2;

    iRet = sol.Addition(iNo1,iNo2);

    cout<<"Addition is:"<<iRet<<"\n";

    return 0;
}