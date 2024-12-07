#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} *top = NULL, *top1, *top2;

int push(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = top;
    top = newnode;
}
void traversal(struct node *top)
{
    while (top != NULL)
    {
        printf("%d->", top->data);
        top = top->link;
    }
}

void pop()
{
    int data = top->data;
    struct node *temp;
    temp = top->link;
    top = temp;
    copystack(data);
}
    int copystack(int data)
{
    struct node *ptr;
    ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = top1;
    top1 = ptr;
}
 void pop1()
{
    int data = top1->data;
    struct node *temp1;
    temp1 = top1->link;
    top1 = temp1;
    copystack1(data);
}
int copystack1(int data)
{
    struct node *ptr2;
    ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = top2;
    top2 = ptr2;
}
 void pop2()
{
    int data = top2->data;
    struct node *temp3;
    temp3 = top2->link;
    free(top2);
    top2 = temp3;
    copystack3(data);
}
int copystack3(int data)
{
    push(data);
}
void traversal2(struct node *top2)
{
    while (top2 != NULL)
    {
        printf("%d->", top2->data);
        top2 = top2->link;
    }
}
void traversal1(struct node *top1)
{
    while (top1 != NULL)
    {
        printf("%d->", top1->data);
        top1 = top1->link;
    }
}

int main()
{
    int data;

    for (int i = 0; i < 4; i++)
    {
        printf("enter the %d data\n ", i + 1);
        scanf("%d", &data);
        push(data);
    }
    printf("ORIGINAL STACK IS:\n");
    traversal(top);
    for (int i = 0; i < 4; i++)
    {
        pop();
    }
    printf("  \n");
    printf("REVERSE COPIED DATA OF STACK IN STACK1\n");
    traversal1(top1);
    for (int i = 0; i < 4; i++)
    {
        pop1();
    }
    printf(" \n");
    printf("REVERSE COPIED DATA OF STACK1 IN STACK2\n");
    traversal2(top2);
    printf(" \n");
    printf("NOW THE REVERSE OF ORIGINAL STACK IS\n");
    for (int i = 0; i < 4; i++)
    {
        pop2();
    }
    traversal(top);

    return 0;
}