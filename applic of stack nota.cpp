#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
        exit(EXIT_FAILURE);
    }
    s->top++;
    s->items[s->top] = value;
}
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    int popped = s->items[s->top];
    s->top--;
    return popped;
}
int evaluatePostfix(char *expression) {
    struct Stack stack;
    initializeStack(&stack);

    for (int i = 0; expression[i] != '\0'; ++i) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            switch (expression[i]) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    push(&stack, operand1 / operand2);
                    break;
                default:
                    printf("Invalid postfix expression\n");
                    exit(EXIT_FAILURE);
            }
        }
    }
    return pop(&stack);
}

int main() {
    char expression[MAX_SIZE];

    printf("Enter postfix expression: ");
    fgets(expression, sizeof(expression), stdin);

    int result = evaluatePostfix(expression);
    printf("Result: %d\n", result);

    return 0;
}
