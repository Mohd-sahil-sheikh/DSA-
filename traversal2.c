#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head,*second;
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
while (head!=NULL)
{
    printf("%d\n",head->data);
    head=head->link;
}
return 0;
}