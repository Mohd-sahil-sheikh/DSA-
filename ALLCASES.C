#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void traversal(struct node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->link;
    }
}
int countnodes(struct node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->link;
    }
    return count;
}
struct node *addendnode(struct node *head)
{
    struct node *ptr, *temp, *temp2;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 5;
    temp->link = NULL;
    ptr = head;
    temp2 = head;
    ptr = ptr->link;
    while (ptr != NULL)
    {
        head = head->link;
        ptr = ptr->link;
    }
    head->link = temp;
    head = temp2;
    return head;
}
struct node *addfirstnode(struct node *head)
{
    struct node *ptr, *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 5;
    temp->link = NULL;
    ptr = head;
    temp->link = ptr;
    head = temp;
    return head;
}
struct node *insert_at_given_position(struct node *head)
{
    int position = 1;
    struct node *temp2, *ptr;
    temp2 = (struct node *)malloc(sizeof(struct node));
    temp2->data = 5;
    temp2->link = NULL;

    ptr = head;
    while (position != 0)
    {

        ptr = ptr->link;
        position--;
    }

    temp2->link = ptr->link;
    ptr->link = temp2;

    return head;
}
struct node *del_first_node(struct node *head)
{
    struct node *ptr;
    ptr = head;
    head = ptr->link;
    free(ptr);
    ptr = NULL;
    return head;
}
struct node *del_end_node(struct node *head)
{
    struct node *ptr, *temp;
    ptr = head->link->link;
    free(ptr);
    ptr = NULL;
    temp = head->link;
    temp->link = NULL;
    return head;
}
struct node *del_at_given_position(struct node *head)
{
    struct node *ptr;
    int pos = 3;
    ptr = head;
    while (pos != 2)
    {
        ptr = ptr->link;
        pos--;
    }
    head->link = ptr->link;
    free(ptr);
    ptr = NULL;
    return head;
}
struct node *del_entirelist(struct node *head)
{
    struct node *ptr, *temp;

    temp = head;

    while (temp != NULL)
    {
        temp = temp->link;
        free(head);
        head = temp;
    }
    return head;
}
struct node *reverselist(struct node *head)
{
    struct node *prev, *next;
    prev = NULL;
    next = NULL;
    while (head != NULL)
    {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}

int main()
{
    int n;

    struct node *head, *second;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = 98;
    second->link = NULL;
    head->link = second;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = 3;
    second->link = NULL;
    head->link->link = second;

    printf("PRESS 1 FOR TRAVERSAL ONLY\n");
    printf("\n");
    printf("PRESS 2 FOR counting THE  number of NODEs\n");
    printf("\n");
    printf("PRESS 3 FOR INSERTING THE end NODE\n");
    printf("\n");
    printf("PRESS 4 FOR INSERTING THE first NODE\n");
    printf("\n");
    printf("PRESS 5 FOR INSERTING IN THE GIVEN POSITION\n");
    printf("\n");
    printf("PRESS 6 FOR deleting THE first NODE\n");
    printf("\n");
    printf("PRESS 7  FOR deleting THE end NODE\n");
    printf("\n");
    printf("PRESS 8  FOR deleting THE given NODE\n");
    printf("\n");
    printf("PRESS 9  FOR deleting THE entire list\n");
    printf("\n");
    printf("PRESS 10  FOR reversing THE list\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("traversed list is under:\n");
        traversal(head);
        break;
    case 2:
        printf("counted nodes are: %d\n", countnodes(head));
        break;
    case 3:
        addendnode(head);
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->link;
        }
        break;
    case 4:
        addfirstnode(head);
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->link;
        }
        break;
    case 5:
        insert_at_given_position(head);
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->link;
        }
        break;
    case 6:
        del_first_node(head);
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->link;
        }
        break;
    case 7:
        del_end_node(head);
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->link;
        }
        break;
    case 8:
        del_at_given_position(head);
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->link;
        }
        break;
    case 9:
        del_entirelist(head);
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->link;
        }
        break;
    case 10:
        reverselist(head);
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->link;
        }
        break;
    default:
        printf("INVALID INPUT");
        break;
    }
    return 0;
}