#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *rear = NULL, *front = NULL;
struct node *head;

void enqueue(int data)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = NULL;
    if (rear == NULL )
    {
        rear = newnode;
        front = newnode;
    }
    else
    {
        rear->link = newnode;
        rear = newnode;
    }
    printf("%d enqueued is\n", rear->data);
}
void dequeue()
{
    printf(" %d dequeued \n", front->data);
    front = front->link;
}
void display()
{
    struct node *temp=front;
        while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }
}
int main()
{
    int choice;

    do
    {
        printf("Select an option:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {

            int data;
            printf("Enter the data you want to enqueue: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        }
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid option\n");
            break;
        }
    } while (choice != 4);
    return 0;
}