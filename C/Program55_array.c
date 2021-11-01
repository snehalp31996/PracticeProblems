#include<stdio.h>
//     0       1       2       3       4
// _________________________________________
// |       |       |       |       |       | Arr
// -----------------------------------------
int main()
{
    int Arr[5]; //Array of 5 integers

//Addition of 5 number

    int iSum=0,iCnt = 0;
/*
printf("Enter Number : ");
scanf("%d",&Arr[0]);
scanf("%d",&Arr[1]);
scanf("%d",&Arr[2]);
scanf("%d",&Arr[3]);
scanf("%d",&Arr[4]);*/
printf("Enter 5 Numbers:");
for(iCnt = 0; iCnt < 5; iCnt++ )
{
    scanf("%d",&Arr[iCnt]);
}

for (iCnt = 0; iCnt < 5; iCnt++)
{
    iSum = iSum + Arr[iCnt];
}

printf("Addition is : %d\n",iSum);

    return 0;
}



 