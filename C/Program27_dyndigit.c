//Header file inclusion
#include<stdio.h>

//Function declaration
void Display(int);

//Entry point function
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);
    
    Display(iValue); // Function call
    return 0;
}

// Function Defination
void Display(int iNo)
{
    //Local variable
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo %10;   
        printf("%d\n",iDigit);
        iNo = iNo / 10;     
    }
    
}
