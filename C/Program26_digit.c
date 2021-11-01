//Header file inclusion
#include<stdio.h>

//Function declaration
void Display();

//Entry point function
int main()
{
    Display();
    return 0;
}

// Function Defination
void Display()
{
    //Local variable
    int iNo = 7521;
    int iDigit = 0;

    iDigit = iNo %10;   //1
    printf("%d\n",iDigit);
    iNo = iNo / 10;     //752

    iDigit = iNo %10;   //2
    printf("%d\n",iDigit);
    iNo = iNo / 10;     //75

    iDigit = iNo %10;   //5
    printf("%d\n",iDigit);
    iNo = iNo / 10;     //7

    iDigit = iNo %10;   //7
    printf("%d\n",iDigit);
    iNo = iNo / 10;     //0
}
