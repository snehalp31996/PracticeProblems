#include<stdio.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE p = NULL;  //8
    PPNODE q = NULL; // 8
    
    p = (PNODE)maclloc(sizeof(NODE));
    q = &p;
    return 0;
}
/*
p -100
q - 200
&p - 200
&q-  300
p-> data -- 11
p-> next ---NULL
 *q-> data = 11
 *q-> next -- NULL
   *q = 100

   */
