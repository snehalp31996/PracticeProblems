#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE, **PPNODE;

void InserFirst(PPNODE Head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn -> next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn ->next =  *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
}

void InserLast(PPNODE Head , int no)
{
     PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn -> next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp ->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newn;
        newn->prev = temp;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t->\t",Head->data);
        Head = Head -> next;
    }
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head!= NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}
void DeleteFirstX(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else{
        *Head = (*Head) ->next;
        free((*Head)->prev);
        (*Head)->prev = NULL;
    }
}
void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head != NULL)   //LL contains atleast 1 node
    {
        *Head = (*Head)->next;
        free(temp);
        if(*Head != NULL)
        {
            (*Head)->prev = NULL:
        }
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
}

void InserAtPos(PPNODE Head, int no, int ipos)
{
    int size = Count(*Head);
    int i =0;
    PNODE temp = *Head;
    PNODE newn = NULL;
    if((ipos < 1) || (ipos > size+1))
    {
        printf("\nInvalif entry");
        return;
    }
    if(ipos == 1)
    {
        InserFirst(Head,no);

    }
    esle if((ipos == size + 1))
    {
        InserLast(Head, no);
    }
    else{
        newn = (PNODE)mallocs(sizeof(NODE));

        newn->next = NULL;
        newn->prev = NULL;
        newn -> data = no;

        for(i = 1; I < ipos - 1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->next ->prev = newn;
        temp->next = newn;
        new->prev = temp;
    }
}

void DeleteAtPos(PPNODE Head, int ipos)
{
    int size = Count(*Head);
    int i =0;
    PNODE temp = *Head;
    if((ipos < 1) || (ipos > size))
    {
        printf("\nInvalif entry");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(Head);

    }
    esle if((ipos == size))
    {
        DeleteLast(Head);
    }
    else{
        for(i = 1; I < ipos - 1;i++)
        {
            temp = temp->next;
        }
        temp-> next = temp->next ->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}
int main()
{
    PNODE first = NULL;
    int icnt = 0;

    InserFirst(&first,51);
    InserFirst(&first,21);
    InserFirst(&first,11);

    InserLast(&first,101);

    Display(first);

    icnt = Count(first);

    printf("\nNuber of elements : %d\n",icnt);

    
    
    return 0;
}
