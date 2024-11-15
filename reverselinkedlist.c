#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
 struct node* reverselinkedlist(struct node *head)
{
    struct node *prev,*next;
    prev=NULL;
    next=NULL;
    while (head!=NULL)
    {
    next=head->link;
    head->link=prev;
    prev=head;
    head=next;
    }
    head=prev;
    
    
    return head;




}


int main()
{
struct node *head,*second;
head=(struct node*)malloc(sizeof(struct node));
head->data=12;
head->link=NULL;
second=(struct node*)malloc(sizeof(struct node));
second->data=45;
second->link=NULL;
head->link=second;
second=(struct node*)malloc(sizeof(struct node));
second->data=98;
second->link=NULL;
head->link->link=second;

head=reverselinkedlist(head);

while(head!=NULL)
{
    printf("%d\n",head->data);
    head=head->link;
    }
return 0;

}