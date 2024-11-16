#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
 void addnode(struct node *head)
{
    int i;
    int index1,index2;
    printf("enter the  two index you want to insert the node between\n");
    scanf("%d%d",&index1,&index2);

    
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=5;
    temp->next=NULL;
    struct node *ptr1,*ptr2;
ptr1=head;
ptr2=head;
for ( i = 1; i <index1; i++)
{
    ptr1=ptr1->next;
}
for ( i = 1; i < index2; i++)
{
    ptr2=ptr2->next;
}
temp->next=ptr2;
ptr1->next=temp;
temp->prev=ptr1;

}

int main()
{
    struct node *head,*second;
    head=(struct node*)malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=45;
    head->next=NULL;
     second=(struct node*)malloc(sizeof(struct node));
second->prev=head;
second->data=98;
second->next=NULL;
head->next=second;
 second=(struct node*)malloc(sizeof(struct node));
second->prev=head->next;
second->data=3;
second->next=NULL;
head->next->next=second;
addnode(head);
while(head!=NULL)
{
    printf("%d->",head->data);
    head=head->next;
}
return 0;

}