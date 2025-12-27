#include <stdio.h>
#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

void enqueue() {
    int item;
    if ((rear + 1) % SIZE == front) {
        printf("Queue Overflow\n");
        return;
    }
    printf("Enter element: ");
    scanf("%d", &item);
    if (front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    cq[rear] = item;
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted element: %d\n", cq[front]);
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

void display() {
    int i = front;
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    while (1) {
        printf("%d ", cq[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    int choice;
    do {
        printf("\n1.Enqueue 2.Dequeue 3.Display 4.Exit\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1: enqueue(); break;
        case 2: dequeue(); break;
        case 3: display(); break;
        }
    } while (choice != 4);
    return 0;
}
