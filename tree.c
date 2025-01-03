#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node* createnodes()
{
    struct node *newnode;
    int data;
    printf("enter the data \n");
    scanf("%d",&data);
    if (data==-1)
    {
        return NULL;
    }
    else{
        newnode=malloc(sizeof(struct node));
        newnode->data=data;
        newnode->left=createnodes();
        newnode->right=createnodes();

    }
    return newnode;
    
}
void traversal_preorder(struct node *root)
{
    if(root==NULL)
    {
        return ;
    }
    printf("%d",root->data);
    traversal_preorder(root->left);
traversal_preorder(root->right);
}
void inordertraversal(struct node *root)
{
    if (root==NULL)
    {
        return;
    }
    inordertraversal(root->left);
    printf("%d",root->data);
    inordertraversal(root->right);
    
}
 void postorder(struct node *root)
{
     if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
int main()
{
struct node *root=createnodes();
traversal_preorder(root);
printf(" \n");
inordertraversal(root);
printf(" \n");
postorder(root);
return 0;
}