#include <stdio.h>
int rear = -1, front = -1;
int queue[6];
void enqueue(int data)
{
    if (rear == -1 && front == -1)
    {
        rear = front = 0;
        queue[rear]=data;
    }
    else if ((rear + 1) % 6 == front)
    {
        printf("queue is full\n");
    }
    else
    {
        rear = (rear + 1) % 6;
        queue[rear] = data;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("list is empty\n");
    }
    else if (rear == front)
    {
        printf("%d dequeued", queue[rear]);
        front = rear = -1;
    }
    else
    {

        printf("%d dequeued\n", queue[front]);
        front = (front + 1) % 6;
    }
}
void display()
{
    int i=front;

    while (i != rear)
    {
        printf("%d->", queue[i]);
        i = (i + 1) % 6; 
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