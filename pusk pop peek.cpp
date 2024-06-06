#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct Stack {
    int items[MAX_SIZE];
    int top;
};
void initializeStack(struct Stack *s) {
    s->top = -1;
}
int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}
int isEmpty(struct Stack *s) {
    return s->top == -1;
}
void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->top++;
    s->items[s->top] = value;
}
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        return -1;
    }
    int popped = s->items[s->top];
    s->top--;
    return popped;
}
int peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->items[s->top];
}

int main() {
    struct Stack stack;
    initializeStack(&stack);
    push(&stack, 1);
    push(&stack, 2);
    push
