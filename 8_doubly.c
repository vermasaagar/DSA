#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    if (position == 1) {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    int count = 1;

    while (current && count < position) {
        current = current->next;
        count++;
    }

    if (current == NULL) {
        // Position is beyond the length of the list
        return;
    }

    newNode->next = current;
    newNode->prev = current->prev;
    current->prev->next = newNode;
    current->prev = newNode;
}

void display(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Inserting nodes at different positions
    insertAtPosition(&head, 10, 1); // List: 10
    insertAtPosition(&head, 20, 2); // List: 10 20
    insertAtPosition(&head, 30, 1); // List: 30 10 20
    insertAtPosition(&head, 40, 3); // List: 30 10 40 20

    // Displaying the list
    printf("Doubly Linked List: ");
    display(head);

    return 0;
}
