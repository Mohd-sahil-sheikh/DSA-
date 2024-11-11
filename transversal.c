#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};
int linkedlisttraversal(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    

}
int main()
{
    struct node *head,*second,*third;
    head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

head->data=2;
head->next=second;
second->data=5;
second->next=third;
third->data=9;
third->next=NULL;
linkedlisttraversal(head);
return 0;
}