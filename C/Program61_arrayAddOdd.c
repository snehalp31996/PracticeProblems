#include<stdio.h>
#include<stdlib.h>

int AddOdd(int Arr[], int iSize)
{
    int  i =0, iSum = 0;
    

    for(i = 0 ; i<iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iSum = iSum + Arr[i] ;
        }
    }
    
    return iSum;
}
int main()
{
    int iLength = 0, i = 0, iRet = 0;
    int *ptr = NULL;
 
    
    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    ptr = (int *) malloc(sizeof(int) * iLength);
    printf("Enter elements:");
    for(i = 0;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("\nEntered data is:");
    for(i = 0;i<iLength ; i++)
    {
        printf("%d\t",ptr[i]);
    }

    iRet = AddOdd(ptr,iLength);
    printf("\n Addition of Odd No  :%d\n",iRet);
    free(ptr);
    return 0;

}