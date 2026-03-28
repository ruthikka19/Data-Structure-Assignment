#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
int isEmpty() {
    return front == -1;
}
int isFull() {
    return (rear + 1) % MAX == front;
}
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is Full! Cannot insert %d\n", value);
        return;
    }
    if (front == -1) front = 0;       
    rear = (rear + 1) % MAX;          
    queue[rear] = value;
    printf("Enqueued: %d\n", value);
}
void dequeue() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    if (front == rear) {
        front = rear = -1;            
    } else {
        front = (front + 1) % MAX;    
    }
}
void peek() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Front Element: %d\n", queue[front]);
}
void display() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("\nCircular Queue Elements:\n");
    printf("─────────────────────────────\n");
    int i = front;
    int count = 0;
    while (count < (rear - front + MAX) % MAX + 1) {
        printf("  [%d] %d\n", count + 1, queue[i]);
        i = (i + 1) % MAX;
        count++;
    }
    printf("─────────────────────────────\n");
    printf("Front = %d | Rear = %d\n\n", queue[front], queue[rear]);
}

int main() {
    int choice, value;

    printf("==============================\n");
    printf("    CIRCULAR QUEUE SYSTEM     \n");
    printf("==============================\n");

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting Circular Queue.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
