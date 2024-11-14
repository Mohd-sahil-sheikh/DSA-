#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
  void dellastnode(struct node *head)
{
    struct node *temp2=(head->link->link);
    free(temp2);
    temp2=NULL;
    struct node *temp=head->link;
    temp->link=NULL;
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
dellastnode(head);

while (head!=NULL)
{
    printf("%d->",head->data);
    head=head->link;

}
return 0;

}