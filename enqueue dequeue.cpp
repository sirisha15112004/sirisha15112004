#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};
void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}
int isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}
int isEmpty(struct Queue *q) {
    return (q->front == -1 && q->rear == -1);
}
void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear++;
    }
    q->items[q->rear] = value;
}
int dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int dequeued = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    return dequeued;
}
void display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; ++i) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}
int main() {
    struct Queue queue;
    initializeQueue(&queue);
    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    display(&queue);
    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));
    display(&queue);
	 return 0;
}
