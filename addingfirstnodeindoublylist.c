#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *insertatfirst(struct node *head)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = 5;
    temp->next = NULL;
    struct node *ptr;
    head->prev = temp->next;
    temp->prev = NULL;
    temp->next = head;
    head = temp;
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
    head = insertatfirst(head);
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    return 0;
}