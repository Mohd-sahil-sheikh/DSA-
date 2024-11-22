#include <stdio.h>
#include <stdlib.h>
struct node1
{
    int data;
    struct node1 *link;
};
struct node2
{
    int data;
    struct node2 *link;
};
struct node1 *createnodes1(struct node1 *head1)
{
    int i, n;
    printf("enter the number of nodes you want\n");
    scanf("%d", &n);
    struct node1 *ptr, *newnode, *temp;
    newnode = (struct node1 *)malloc(sizeof(struct node1));
    newnode = head1;
    head1->link = newnode;
    temp = head1;
    ptr = newnode;
    for (i = 1; i <= n; i++)
    {
        printf("enter the data of %d node\n", i);
        scanf("%d", &newnode->data);

        newnode = (struct node1 *)malloc(sizeof(struct node1));
        temp = temp->link;
        ptr->link = newnode;
        ptr = newnode;
    }
    temp->link = NULL;
    return head1;
}

void traversal1(struct node1 *head1)
{
    while (head1 != NULL)
    {
        printf("%d->", head1->data);
        head1 = head1->link;
    }
}


void traversal(struct node2 *head2)
{
     while (head2 != NULL)
    {
        printf("%d->", head2->data);
        head2 = head2->link;
    }
}

struct node2* reverse(struct node2 *head2, struct node1 *head1)
{
    struct node2 *newnode;
    struct node1 *temp = head1;
    head2 = NULL;
    
    while (temp != NULL) {
        newnode = (struct node2 *)malloc(sizeof(struct node2));
        newnode->data = temp->data;
        

        newnode->link = head2;
        head2 = newnode;
        
        temp = temp->link; 
    }
    
    return head2;
}

int ispalindrome(struct node1 *head1,struct node2 *head2)
{
    int flag=1;
    while (head1!=NULL)
    {
        if (head1->data!=head2->data)
        {
            flag=0;
            break;
        }
        else
        {
        head1=head1->link;
        head2=head2->link;
        }
    }
    return flag;
}


int main()
{
    int flag;
    struct node1 *head1;
    struct node2 *head2;
    head1 = createnodes1(head1);

    traversal1(head1);
    printf(" \n");
    printf("the  second linkest list in reverse order\n");
    head2=reverse(head2,head1);
    traversal(head2);
     printf(" \n");
    printf("after comparing two lists\n");
    flag=ispalindrome(head1,head2);
    if (flag==1)
    {
        printf("linkest list is palindrome\n");
    }
    if (flag==0)
    {
    printf("the linked list is not palindrome\n");
    }
    return 0;
    
}
