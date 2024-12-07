#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} *top = NULL;

void push(int data)
{

    struct node *head, *newnode;

    newnode = malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("stack overflow\n");
        return;
    }
    newnode->data = data;
    newnode->link = top;
    top = newnode;
}
void traversal(struct node* top)
{
    while (top != NULL)
    {

        printf("%d->\n", top->data);
        top = top->link;
    }
}
int pop()
{
    if(top==NULL)
    {
        printf("stack underflow\n");
    }
    int data = top->data;
    struct node *temp;
    temp = top->link;
    free(top);
    top = temp;
    return data;
}
int main()
{
    int i = 0;
    int data;
    struct node *head;
    int choice;
    do
    {
        printf(" select 1 for push\n");
        printf("select 2 for pop\n");
        printf("select 3 for displaying the list\n");
        printf("select 4 for exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            printf("enter the %d data you want to push\n", i + 1);
            scanf("%d", &data);
            push(data);
            i++;
            break;
        case 2:
            data = pop();
            printf(" deleted data is %d\n", data);
            i--;
            break;
        case 3:
            traversal(top);
            break;
        case 4:
            break;
        default:
            printf("invalid option\n");
            break;
        }
    } while (choice != 4);
    return 0;
}