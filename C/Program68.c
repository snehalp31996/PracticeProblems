// loop without return statement
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize)
{
    int  i =0;
   
    for(i = 1 ; i<iSize; i++)
    {
        if(Arr[i] == 11)
        {
            break;
        }
        
    }

    if(i == iSize)
    {
        return false;
    } 
    else
    {
        return true;
    }
    
}

int main()
{
    int iLength = 0, i = 0;
    int *ptr = NULL;
    bool bRet = 0;
 
    
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

    bRet = CheckNumber(ptr,iLength);
    if(bRet == true)
    {
        printf("Number found!\n");
    }
    else
    {
        printf("Number not found\n");
    }
    free(ptr);
    return 0;

}

// // loop without return statement
// #include<stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>

// bool CheckNumber(int Arr[], int iSize)
// {
//     int  i =0;
//     bool bAns = false;
    
//     for(i = 1 ; i<iSize; i++)
//     {
//         if(Arr[i] == 11)
//         {
//             bAns = true;
//             break;
//         }
        
//     }
        
//     return bAns;
// }

// int main()
// {
//     int iLength = 0, i = 0;
//     int *ptr = NULL;
//     bool bRet = 0;
 
    
//     printf("Enter number of elements : ");
//     scanf("%d",&iLength);


//     ptr = (int *) malloc(sizeof(int) * iLength);
//     printf("Enter elements:");
//     for(i = 0;i < iLength; i++)
//     {
//         scanf("%d",&ptr[i]);
//     }

//     printf("\nEntered data is:");
//     for(i = 0;i<iLength ; i++)
//     {
//         printf("%d\t",ptr[i]);
//     }

//     bRet = CheckNumber(ptr,iLength);
//     if(bRet == 1)
//     {
//         printf("Number found!\n");
//     }
//     else
//     {
//         printf("Number not found\n");
//     }
//     free(ptr);
//     return 0;

// }