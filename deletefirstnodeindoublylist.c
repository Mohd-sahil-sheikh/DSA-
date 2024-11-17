#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
 struct node* delfirstnode(struct node *head)
{
    struct node *ptr;
    ptr=head;
    head=ptr->next;
    head->prev=NULL;
    free(ptr);
    ptr=NULL;
return head;
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
    head=delfirstnode(head);
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    return 0;
}