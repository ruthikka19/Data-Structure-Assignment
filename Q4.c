#include <stdio.h>
#include <string.h>
#define MAX 100
char queue[MAX][50];
int front = -1, rear = -1;
int isEmpty() {
    return front == -1;
}
int isFull() {
    return rear == MAX - 1;
}
void addDoc(char doc[]) {
    if (isFull()) {
        printf("Printer Queue is Full!\n");
        return;
    }
    if (front == -1) front = 0;
    rear++;
    strcpy(queue[rear], doc);
    printf("Document '%s' added to queue.\n", doc);
}
void printDoc() {
    if (isEmpty()) {
        printf("No documents in queue to print!\n");
        return;
    }
    printf("Printing document: '%s'\n", queue[front]);
    if (front == rear) {
        front = rear = -1;  
    } else {
        front++;
    }
}
void displayQueue() {
    if (isEmpty()) {
        printf("No pending documents in queue.\n");
        return;
    }
    printf("\nPending Documents in Queue:\n");
    printf("─────────────────────────────\n");
    for (int i = front; i <= rear; i++) {
        printf("  [%d] %s\n", i - front + 1, queue[i]);
    }
    printf("─────────────────────────────\n");
}
int main() {
    int choice;
    char doc[50];

    printf("─────────────────────────────\n");
    printf("    PRINTER QUEUE SYSTEM      \n");
    printf("─────────────────────────────\n");

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Add Document to Queue\n");
        printf("2. Print Document\n");
        printf("3. Display Pending Documents\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter document name: ");
                scanf("%s", doc);
                addDoc(doc);
                break;

            case 2:
                printDoc();
                break;

            case 3:
                displayQueue();
                break;

            case 4:
                printf("Exiting Printer Queue System. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
