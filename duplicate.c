#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *createnodes(struct node *head)
{
    int n, i;
    head = (struct node *)malloc(sizeof(struct node));
    printf("enter the number of nodes you want in your list\n");
    scanf("%d", &n);
    struct node *ptr, *newnode, *temp;
    newnode = head;
    head->link = newnode;
    ptr = newnode;
    temp = head;
    for (i = 1; i <= n; i++)
    {
        printf("enter the data of %d node\n", i);
        scanf("%d", &newnode->data);
        newnode = (struct node *)malloc(sizeof(struct node));
        temp = temp->link;
        ptr->link = newnode;
        ptr = newnode;
    }
    temp->link = NULL;

    return head;
}
struct node *dublicatenodes(struct node *head)
{
    struct node *ptr, *forward, *backward;

    ptr = head;
    forward = head->link;
    backward = head;
    while (ptr->link != NULL)
    {
        while (forward!= NULL)
        {
            if (ptr->data == forward->data)
            {
                backward->link = forward->link;
                forward->link=NULL;
               if(backward->link==NULL){
			return head;
			break;}


                forward = backward;
                forward=forward->link;
            }
                else
                {
                    backward=backward->link;
                    forward = forward->link;
                    
                }
            
          
        }
          
            ptr = ptr->link;
            backward=ptr;
            forward = ptr->link;
    }

    return head;
}
void traversal(struct node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->link;
    }
}
int main()
{
    struct node *head;
    head = createnodes(head);
    traversal(head);
    printf("  \n");
    printf("the linkest list after removing dublicates\n");
    head = dublicatenodes(head);
    traversal(head);
    return 0;
}