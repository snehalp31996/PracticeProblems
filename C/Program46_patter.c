#include<stdio.h>

void Display(int iRow, int iCol)
{

    int i =0, j =0;
    for(i = 1; i<=iRow;i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }
        
    printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of Row :");
    scanf("%d",&iValue1);
    printf("Enter number of Columnn :");
    scanf("%d",&iValue2);
    Display(iValue1,iValue2);
    return 0;
}






// #include<stdio.h>

// void Display()
// {
//     int iRow = 3;
//     int iCol = 4;

//     int i =0, j =0;
//     for(i = 1; i<=iRow;i++)
//     {
//         for (j = 1; j <= iCol; j++)
//         {
//             printf("*\t");
//         }
        
//     printf("\n");
//     }
    
// }

// int main()
// {
//     Display();
//     return 0;
// }