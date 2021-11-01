#include<stdio.h>
#include<stdbool.h>
int Reverse(int);
bool CheckPalindrome(int);

int main() {
int iValue = 0; 
bool bRet = false;
printf("Enter number:"); 
scanf("%d",&iValue);

bRet = CheckPalindrome(iValue);
if (bRet == true)
{
    printf("Number is Palindrome\n");

}
else
{
    printf("Number not Palindrome\n");
}
return 0; 
}

bool CheckPalindrome(int iNo)
{
    int iNumber = 0;
    iNumber = Reverse(iNo);
    if (iNumber == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Reverse(int iNo) 
{
int iDigit = 0;
int iRev = 0;

while (iNo != 0)   //O(N)  where is N is number of digit  (N>=0)
{
    iDigit = iNo % 10;
    iRev = (iRev * 10) + iDigit;
    iNo = iNo / 10;
}
return iRev;
}