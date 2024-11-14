#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* delentirelist(struct node *head)
{
struct node *temp;
temp=head;
while(temp!=NULL)
{
temp=temp->link;
free(head);
head=temp;
}
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



head= delentirelist(head);

while (head!=NULL)
{
    printf("%d->",head->data);
    head=head->link;

}
return 0;

}