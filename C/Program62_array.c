#include<stdio.h>
#include<stdlib.h>

int CountNo(int Arr[], int iSize)
{
    int  iCount = 0,i =0;
    

    for(i = 0 ; i<iSize; i++)
    {
        if(Arr[i] > 10)
        {
            iCount++ ;
        }
    }
    
    return iCount;
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

    iRet = CountNo(ptr,iLength);
    printf("\n Count if Nu > than 10   :%d\n",iRet);
    free(ptr);
    return 0;

}