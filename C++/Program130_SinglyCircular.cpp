#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE;

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int size;
    public:
        SinglyCL()
        {
            first = NULL;
            last = NULL;
            size = 0;
        }

        void Display()
        {
            PNODE temp = first;
            if(first == NULL & last == NULL)
            {
                return;
            }
            do
            {
                cout<<"\t"<<temp->data<<"\t->";
                temp = temp->next;

            } while (temp!=last->next);
            cout<<"\n";
        }
        int Count()
        {
            return size ;
        }
        void InsertFirst(int no)
        {
            PNODE newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            if(first == NULL && last == NULL)
            {
                first = newn;
                last = newn;

            }
            else{
                newn ->next = first;
                first = newn;
            }
            last->next = first;
            size++;

        }
        void InsertLast(int no)
        {
            PNODE newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            if(first == NULL && last == NULL)
            {
                first = newn;
                last = newn;

            }
            else{
                last->next = newn;
                last = newn;

            }
            last->next = first;
            size++;
        }
        void InsertAtPos(int no, int pos)
        {}
        void DeleteFirst()
        {
            
            if (first== NULL && last == NULL)
            {
                return;
            }
            else if(first == last)
            {
                delete first;
                first = NULL;
                last = NULL;
                
            }
            else{
                
                last->next = first;
                
            }
            size--;
        }
        void DeleteLast()
        { 
            PNODE temp = first;

            if (first== NULL && last == NULL)
            {
                return;
            }
            else if(first == last)
            {
                delete first;
                first = NULL;
                last = NULL;
                
            }
            else{
                while (temp->next != last)
                {
                    temp = temp->next;
                }
                
                delete last;
                last = temp;

                last->next = first;
            }
            size--;
        }
        void DeleteAtPos(int ipos)
        {}
};


int main()
{
    SinglyCL obj;
    int iRet = 0;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(10);
    obj.Display();

    iRet = obj.Count();
    cout<<"Number of elements : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of elements : "<<iRet<<"\n";

    return 0;
}