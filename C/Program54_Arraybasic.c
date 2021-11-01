#include<stdio.h>
//     0       1       2       3       4
// _________________________________________
// |       |       |       |       |       | Arr
// -----------------------------------------
int main()
{
    int Arr[5]; //Array of 5 integers

//Addition of 5 number

    int iSum=0;

printf("Enter Number : ");
scanf("%d",&Arr[0]);
scanf("%d",&Arr[1]);
scanf("%d",&Arr[2]);
scanf("%d",&Arr[3]);
scanf("%d",&Arr[4]);

iSum=Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[4];
printf("Addition is : %d\n",iSum);

    return 0;
}



 