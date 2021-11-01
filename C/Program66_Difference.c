#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int  iDiff = 0,i =0, iMin = Arr[0], iMax = Arr[0];
    
    for(i = 1 ; i<iSize; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        
    }
    iDiff = iMax - iMin;
    
    return iDiff;
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

    iRet = Difference(ptr,iLength);
    printf("\n Difference  :%d\n",iRet);
    free(ptr);
    return 0;

}