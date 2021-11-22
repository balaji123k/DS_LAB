#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*tail,*temp,*t;
void createnode()
{
    temp=(struct node *)malloc (sizeof(struct node));
    printf("enter data ");
    scanf("%d",&temp->data);
    temp->next=NULL;
}
void createlink(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        createnode();
        if(head==NULL)
        {
            head=temp;
            tail=head;
        }
        else
        {
            tail->next=temp;
            tail=tail->next;
        }
    }
}
void traverse()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void insertbeg()
{
    createnode();
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
void insertmid()
{
    int x;
    printf("enter data after which is inserted");
    scanf("%d",&x);
    t=head;
    while(t->data!=x)
    {
        t=t->next;
    }
    if(t->data==x)
    {
        createnode();
        temp->next=t->next;
        t->next=temp;
    }
}
void insertend()
{
    createnode();
    tail->next=temp;
    tail=tail->next;
}
void deletebeg()
{
    temp=head;
    head=head->next;
    free (temp);
}
void deletemid()
{
    int a;
    printf("enter the data for delete");
    scanf("%d",&a);
    temp=head;
    while(temp->data!=a)
    {
        t=temp;
        temp=temp->next;
    }
    t->next=temp->next;
    free(temp);
}
void deleteend()
{
    if(head==NULL)
    {
        printf("there is no linked list");
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            t=temp;
            temp=temp->next;
        }
        t->next=NULL;
        free(temp);
    }
}
int main()
{
   
    while(1)
    {
        int i;
        printf("enter 1 for create link\n");
        printf("enter 2 for insertion at begin\n");
        printf("enter 3 for insertion at middle\n");
        printf("enter 4 for insertion at end \n");
        printf("enter 5 for deletion at begin\n");
        printf("enter 6 for deletion at middle\n");
        printf("enter 7 for deletion at end \n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:{
                int n;
                printf("enter no of element in linked list");
                scanf("%d",&n);
                createlink(n);
                break;
            }
            case 2:{
                insertbeg();
                printf("the linked list after insertion \n");
                traverse();
                break;
            }
            case 3:
            {
                insertmid();
                printf("the linked list after insertion at mid \n");
                traverse();
                break;
            }
            case 4:
            {
                insertend();
                printf("The linked list after insertion at end\n");
                traverse();
                break;
            }
            case 5:{
                deletebeg();
                printf("the linked list after deletion \n");
                traverse();
                break;
            }
            case 6:
            {
                deletemid();
                printf("the linked list after deletion at mid \n");
                traverse();
                break;
            }
            case 7:
            {
                deleteend();
                printf("The linked list after deletion at end\n");
                traverse();
                break;
            }
            case 8:
            {
                exit(0);
            }
        }
    }
   
    return 0;
}
/*OUTPUT
enter 1 for create link
enter 2 for insertion at begin
enter 3 for insertion at middle
enter 4 for insertion at end
enter 5 for deletion at begin
enter 6 for deletion at middle
enter 7 for deletion at end.
1
enter no of element in linked list3
enter data 1
enter data 2
enter data 3
enter 1 for create link
enter 2 for insertion at begin
enter 3 for insertion at middle
enter 4 for insertion at end
enter 5 for deletion at begin
enter 6 for deletion at middle
enter 7 for deletion at end.
2
enter data 1
the linked list after insertion
1->1->2->3->enter 1 for create link
enter 2 for insertion at begin
enter 3 for insertion at middle
enter 4 for insertion at end
enter 5 for deletion at begin
enter 6 for deletion at middle
enter 7 for deletion at end.
7
The linked list after deletion at end
1->1->2->enter 1 for create link
enter 2 for insertion at begin
enter 3 for insertion at middle
enter 4 for insertion at end
enter 5 for deletion at begin
enter 6 for deletion at middle
enter 7 for deletion at end.*/



