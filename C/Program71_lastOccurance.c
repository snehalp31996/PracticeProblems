#include<stdio.h>
#include<stdlib.h>


int LastOccurnce(int Brr[],int iSize,int iNo)
{
    int i=0;
   
    for(i=iSize-1;i>=0;i--)   //isize -1 bcoz input is 5 then index goes till 4
    {
        if(Brr[i]==iNo)
        {
           
            break;
        }
        
    }
    if(i==-1)
    {
        return -1;
    }
    else
    {
        return i;
    }
    
}
int main()
{
    int iLenght=0, i=0;
    int iRet=0,iValue2=0;
    int *ptr=NULL;
    printf("Enter Number of elements ");
    scanf("%d",&iLenght);
    ptr=(int*)malloc(sizeof(int)*iLenght);

    printf("Enter Elements\n");
    for (i = 0; i < iLenght; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter number to search : ");
    scanf("%d",&iValue2);
    iRet=LastOccurnce(ptr,iLenght,iValue2);

   if (iRet==-1)
   {
       printf("Number is not there");
   }
   else
   printf("Number is there with index :%d\n",iRet);
    free(ptr);
    return 0;
}