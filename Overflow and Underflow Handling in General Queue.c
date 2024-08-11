#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

int gqueue[MAXSIZE], front = -1, rear = -1;

void enqueue(int item) {
    if (rear >= MAXSIZE - 1) {
        printf("Overflow: Queue is full\n");
    } else {
        if (front == -1) front = 0;
        rear = rear + 1;
        gqueue[rear] = item;
        printf("Enqueue Successful\n");
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Underflow: Queue is empty\n");
    } else {
        printf("Dequeued element: %d\n", gqueue[front]);
        front = front + 1;
        if (front > rear) {
            front = rear = -1; // Reset queue when empty
        }
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d\t", gqueue[i]);
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

