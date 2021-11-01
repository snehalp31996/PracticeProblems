/////////////////////////////////////////////////
//
// Function Name :  Addition
// Input:           Integer
// Output:          Integer 
// Description:     It is used to add nos.
// Author:          Snehal Patil
// Date:            31st August 2021
//
////////////////////////////////////////////////
/*
    Algorithm

    START
        Accept 1st no as NO1
        Accept 2nd no as NO2
        Perform Addition of NO1 and NO2
        Store the result in RET
        Retrun value of RET
    STOP
*/
#include "Header.h"
int Addition(
                int iNo1,   // 1st input Argument
                int iNo2    // 2nd input Argument
            )
{
    int iResult = 0;        // Local variableto store result
    iResult = iNo1 + iNo2;
    return iResult;         // Return the value to the caller
}