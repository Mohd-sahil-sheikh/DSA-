#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void dellastnode(struct node *head)
{
    struct node *ptr1,*ptr2;
    ptr1=head;
    ptr2=head;
    ptr2=head->next;
    
    while (ptr2!=NULL)
    {
        ptr2=ptr2->next;
        ptr1=ptr1->next;
}
ptr2=ptr1->prev;
ptr2->next=NULL;
    free(ptr1);
    ptr1=NULL;

    
    
}

int main()
{
    struct node *head, *second;
    head = (struct node *)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = 45;
    head->next = NULL;
    second = (struct node *)malloc(sizeof(struct node));
    second->prev = head;
    second->data = 98;
    second->next = NULL;
    head->next = second;
    second = (struct node *)malloc(sizeof(struct node));
    second->prev = head->next;
    second->data = 3;
    second->next = NULL;
    head->next->next = second;
    dellastnode(head);
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    return 0;
}