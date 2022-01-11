#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d\t->\t",Head->data);
        Head = Head -> next;
    }

    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }

    return iCnt;
}

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;   
    }

}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head != NULL)
    {
        *Head = (*Head) -> next;
        free(temp);
    }

}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }

}

void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int size = 0, i =0;;
    PNODE newn = NULL;
    PNODE temp = *Head;

    size = Count(*Head);

    if((iPos < 1) || (iPos> size+1))    //invalid for invalid position
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(Head, no);
    }
    else if(iPos == size+1) //Last position
    {
        InsertLast(Head, no);
    }
    else{   //in between position

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        for( i = 1; i<iPos-1;i++)
        {
            temp = temp -> next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int size = 0, i = 0;;
    PNODE temp = *Head;
    PNODE target = NULL;
    size = Count(*Head);

    if((iPos < 1) || (iPos> size))    //invalid for invalid position
    {
        printf("\nInvalid position\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == size) //Last position
    {
        DeleteLast(Head);
    }
    else{   //in between position

        for( i = 1; i<iPos-1; i++)
        {
            temp = temp -> next;
        }
        target = temp ->next;
        temp ->next = target->next;
        free(target);
    }
}

int main()
{
    PNODE first = NULL;
    int iChoice = 1, value = 0, iRet = 0, pos = 0;

    while(iChoice != 0)
    {
        printf("\n____________________________________________________\n");
        printf("Enter your choice to perform on Linked List\n");
        printf("1 : Insert node at first position\n");
        printf("2 : Insert node at last position\n");
        printf("3 : Insert node at desired position\n");
        printf("4 : Delete first node\n");
        printf("5 : Delete last node\n");
        printf("6 : Delete node at desired position\n");
        printf("7 : Display the contents of linked list\n");
        printf("8 : COunt the number of nodes from linked list\n");
        printf("0 : Terminate the application\n");
        printf("\n____________________________________________________\n");

        scanf("%d",&iChoice);
        
        switch (iChoice)
        {
        case 1:
            printf("\nEnter the data to insert : ");
            scanf("%d",&value);
            InsertFirst(&first,value);
            break;
        
        case 2:
            printf("\nEnter the data to insert : ");
            scanf("%d",&value);
            InsertLast(&first,value);
            break;
        
        case 3:
            printf("\nEnter the data to insert : ");
            scanf("%d",&value);
            printf("\nEnter the positiom : ");
            scanf("%d",&pos);
            InsertAtPos(&first,value,pos);
            break;

        case 4:
            DeleteFirst(&first);
            break;

        case 5:
            DeleteLast(&first);
            break;

        case 6:
            printf("\nENter the posiiton : ");
            scanf("%d",&pos);
            DeleteAtPos(&first,pos);
            break;

        case 7:
            printf("\nElements of linked list : ");
            Display(first);
            break;

        case 8:
            iRet = Count(first);
            printf("\nNumber of Elements in linked list : %d",iRet);
            break;
        
        case 0:
            printf("\nThank you!\n");
            break;

        default:
            printf("\nPlease enter valid input");
            break;
        }
    }

    return 0;
}