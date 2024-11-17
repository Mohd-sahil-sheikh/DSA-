#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *reverselist(struct node *head)
{
    int i, n;
    printf("enter the nodes in your list\n");
    scanf("%d", &n);
    struct node *ptr;
    ptr = head;
    for (i = 0; i < n - 1; i++)
    {
        ptr = ptr->next;
    }

    return ptr;
}

int main()
{
    struct node *head, *second, *ptr;
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
    ptr = reverselist(head);
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->prev;
    }
    return 0;
}