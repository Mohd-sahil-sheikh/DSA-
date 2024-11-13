#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
};
 void insertatlocation(struct node *head,int pos)
{
  struct node *temp,*ptr;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=4;
  temp->link=NULL; 
ptr=head;
while(pos!=2)
{
  ptr=ptr->link;
  pos--;

}
temp->link=ptr->link;
ptr->link=temp;

}





int main()
{
struct node *head,*second;

head=(struct node*)malloc(sizeof(struct node));
head->data=45;
head->link=NULL;
second=(struct node*)malloc(sizeof(struct node));
second->data=23;
second->link=NULL;
head->link=second;
second=(struct node*)malloc(sizeof(struct node));
second->data=67;
second->link=NULL;
head->link->link=second;
int position=3;


  


insertatlocation(head,position);

while(head!=NULL)
{
  printf("%d\n",head->data);
  head=head->link;
}
  return 0;
}