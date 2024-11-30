#include <stdio.h>
#include <stdlib.h>
int stack_arr[4]; 
int top = -1; 
void push(int data) {
    if (top == 3) {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack_arr[top] = data;
}
int pop() {
    int value;
    if (top == -1) {
        printf("Stack is empty\n");
        exit(1);
    }
    value = stack_arr[top];
    top--;
    return value;
}
int main() {
    int value;

    push(4);
    push(9);
    value = pop();

    printf("Popped value: %d\n", value);
    return 0;
}
