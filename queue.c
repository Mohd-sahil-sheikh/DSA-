#include <stdio.h>
int rear = -1, front = -1;
int queue[6];
void enqueue(int data)
{
    if (rear == 5)
    {
        printf("queue overflow\n");
        return;
    }
    while (front != 0)
    {

        front++;
    }
    rear++;
    queue[rear] = data;
    printf("%d enqueued \n", queue[rear]);
}
void dequeue()
{
    if (front > rear)
    {
        printf("queue is empty\n");
    }

    printf("%d dequeued \n", queue[front]);
    front++;
}
void display()
{
    for (int i = front; i <=rear ; i++)
    {
        printf("%d\t", queue[i]);
    }
}

int main()
{
    int choice;
    do
    {
        printf("select 1 for enqueue\n");
        printf("select 2 for dequeue\n");
        printf("select 3 for display\n");
        printf("select 4 for EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        
            int data;
            printf("enter the data you want to enqueue\n");
            scanf("%d", &data);
            enqueue(data);
        
            break;
        
        case 2:
            dequeue();
            break;
        case 3:
            display();
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