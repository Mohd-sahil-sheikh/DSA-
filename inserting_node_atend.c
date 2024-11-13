#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
 void insertnodeatend(struct node *ptr)
 {
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=3;
    temp->link=NULL;
    while (ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
 }

int main()
{
    struct node *head,*second,*temp;

    head=malloc(sizeof(struct node));
    head->data=23;
head->link=NULL;
second=malloc(sizeof(struct node));
second->data=45;
second->link=NULL;
head->link=second;
second=malloc(sizeof(struct node));
second->data=78;
second->link=NULL;
head->link->link=second;
second=malloc(sizeof(struct node));
second->data=98;
second->link=NULL;
head->link->link->link=second;
insertnodeatend(head);

while (head!=NULL)
{
    printf("%d\n",head->data);
    head=head->link;
}
return 0;
}