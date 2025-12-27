#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue() {
    int item;
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }
    printf("Enter element: ");
    scanf("%d", &item);
    if (front == -1)
        front = 0;
    queue[++rear] = item;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted element: %d\n", queue[front++]);
}

void display() {
    int i;
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);
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
