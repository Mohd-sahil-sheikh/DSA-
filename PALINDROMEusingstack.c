#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
struct node
{
    int data;
    struct node *link;
} *top = NULL, *top1 = NULL;
void push(char data)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = top;
    top = newnode;
}
 void pop()
{
    char data;
    data = top->data;
    struct node *temp;
    temp = top->link;
    free(top);
    top = temp;

    copy(data);
}
void copy(int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = top1;
    top1 = ptr;
}

bool ispalindrome(struct node *top, struct node *top1)
{
    top=top->link;
    for ( int i = 0; i < 11/2; i++)
    
    
    {
        if (top->data != top1->data)
        {
            return 0;
        }
        else
        {
        top = top->link;
        top1 = top1->link;
        }
    }
    return 1;

}
int main()
{
    int i;
    char str[11];
    scanf("%s",str);
    for (i = 0; i < 11; i++)
    {
        push(str[i]);
    }
    for ( i = 0; i < 11/2; i++)
    {
        pop();
        printf("%c",top1->data);
    }
    
   
   if ( ispalindrome(top,top1))
   {
    printf("this is palindrome\n");
   }
 else
 {
    printf(" not   palindrome\n");
 }
   

    return 0;
}