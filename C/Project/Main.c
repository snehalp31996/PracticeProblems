//////////////////////////////////////
//
// Accept 2 numbers and perform the additiom
//
/////////////////////////////////////

#include "Header.h"     // User defined Header file inclusion

// Entry Point Function
int main()
{

    int iValue1 = 0, iValue2 = 0, iRet = 0; // Local Variables

    printf("Enter 1st Number:\n");  // Accepting Input
    scanf("%d",&iValue1);

    printf("Enter 2nd Number:\n");  // Accepting Input
    scanf("%d",&iValue2);

    iRet = Addition(iValue1,iValue2);   //Function Call

    printf("Addition is : %d \n",iRet);
    

    return 0; // Return success to OS
}