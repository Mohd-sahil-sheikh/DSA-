#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
} *rear = NULL, *front = NULL;
void enqueue(int data)
{
   struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = NULL;
    if (rear == NULL && front == NULL)
    {
        front = rear = newnode;
        rear->link = front;
    }
    else
    {
        rear->link = newnode;
        newnode->link = front;
        rear = newnode;
    }
}
void dequeue()
{
    struct node *temp = front;
    printf("%d dequeued\n", front->data);
    front = front->link;
    rear->link=front;
    free(temp);
}
void display()
{
    struct node *ptr;
    ptr = front;
    while (ptr->link!= front)
    {
        printf("%d->", ptr->data);
        ptr = ptr->link;
    }
    printf("%d",ptr->data);
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