#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

int cqueue[MAXSIZE], front = -1, rear = -1;

void enqueue(int item) {
    if ((front == 0 && rear == MAXSIZE - 1) || (rear == (front - 1) % (MAXSIZE - 1))) {
        printf("Overflow: Circular Queue is full\n");
    } else {
        if (front == -1) { // Queue is empty
            front = rear = 0;
        } else if (rear == MAXSIZE - 1 && front != 0) {
            rear = 0; // Wrap around
        } else {
            rear = rear + 1;
        }
        cqueue[rear] = item;
        printf("Enqueue Successful\n");
    }
}

void dequeue() {
    if (front == -1) {
        printf("Underflow: Circular Queue is empty\n");
    } else {
        printf("Dequeued element: %d\n", cqueue[front]);
        if (front == rear) {
            front = rear = -1; // Queue is now empty
        } else if (front == MAXSIZE - 1) {
            front = 0; // Wrap around
        } else {
            front = front + 1;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Circular Queue is empty\n");
    } else {
        printf("Circular Queue elements are: ");
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                printf("%d\t", cqueue[i]);
            }
        } else {
            for (int i = front; i < MAXSIZE; i++) {
                printf("%d\t", cqueue[i]);
            }
            for (int i = 0; i <= rear; i++) {
                printf("%d\t", cqueue[i]);
            }
        }
        printf("\n");
    }
}

int main() {
    int choice, item;
    do {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (1);
    return 0;
}

