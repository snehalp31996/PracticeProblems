#include<stdio.h>
#include<stdbool.h>

// typedef int bool;
// #define true 1
// #define false 0 
bool CheckPalindrome(int iNo) {
// Logic 
int iTemp = iNo;
int iDigit = 0;
int iRev = 0;


// if(iNo < 0)
//     {
//         iNo = -iNo;
//     }
while (iNo != 0)   //O(N)  where is N is number of digit  (N>=0)
{
    iDigit = iNo % 10;
    iRev = (iRev * 10) + iDigit;
    iNo = iNo / 10;
}
if(iRev == iTemp)
{
    return true;
}
else
{
    return false;
}
return iRev;
}
int main() {
int iValue = 0; 
bool iRet = false;
printf("Enter number:"); 
scanf("%d",&iValue);
iRet = CheckPalindrome(iValue);
if (iRet == true)
{
    printf("Number is Palindrome\n");

}
else
{
    printf("Number not Palindrome\n");
}
return 0; 
}
