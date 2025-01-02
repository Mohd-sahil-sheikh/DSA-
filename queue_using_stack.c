#include<stdio.h>
int top1=-1,top2=-1;
int stack1[6];
int stack2[6];
int count=0;
void enqueue(int data)
{
    top1++;
    stack1[top1]=data;
count++;
}
void dequeue()
{
    int i;
   for ( i =0; i < count; i++)
   {
    top2++;
    stack2[top2]=stack1[top1];
    top1--;
   }
   printf("%d dequeued\n",stack2[top2]);
   top2--;
   for ( i = 0; i < count-1; i++)
   {
    top1++;
   stack1[top1]=stack2[top2];
   top2--;
   }
   count--;
}
   void display()
   {
    for (int  i = 0; i <count; i++)
    {
       printf("%d\t",stack1[i]);
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