#include <stdio.h>
int stack_arr[5];
int m = -1;
void push(int data)
{
    int i, j;

    m = m + 1;

    for (i = m; i > 0; i--)
    {
        stack_arr[i] = stack_arr[i - 1];
    }
    stack_arr[0] = data;
}
int main()
{
    int n, i;
    int data;
    printf("enter the number of elements you want to push in the stack\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the %d data you want to push in the stack\n", i + 1);
        scanf("%d", &data);
        push(data);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", stack_arr[i]);
    }
    return 0;
}
