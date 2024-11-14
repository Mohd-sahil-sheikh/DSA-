#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
  void delposnode(struct node *head,int pos)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=ptr->link;
    while (pos!=0)
    {
        ptr=ptr->link;
        temp=ptr->link;
        pos--;
    }
    free(ptr);
    ptr=NULL;
    head->link=temp;


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
int position=1;


delposnode(head,position);

while (head!=NULL)
{
    printf("%d->",head->data);
    head=head->link;

}
return 0;

}