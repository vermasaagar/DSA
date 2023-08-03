#include <stdio.h>

struct node {
  int data;
  struct node *prev;
  struct node *next;
};

void insertNode(struct node **head, int data, int position) {
  // Create a new node
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->data = data;
  newNode->prev = NULL;
  newNode->next = NULL;

  // Find the node before the desired position
  struct node *currentNode = *head;
  for (int i = 0; i < position - 1; i++) {
    currentNode = currentNode->next;
  }

  // Insert the new node after the current node
  newNode->prev = currentNode;
  newNode->next = currentNode->next;
  currentNode->next->prev = newNode;
  currentNode->next = newNode;

  // Update the head pointer if necessary
  if (position == 0) {
    *head = newNode;
  }
}

void printList(struct node *head) {
  while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");
}

int main() {
  // Create a linked list
  struct node *head = NULL;

  // Insert some nodes
  insertNode(&head, 1, 0);
  insertNode(&head, 2, 1);
  insertNode(&head, 3, 2);

  // Print the linked list
  printList(head);

  // Insert a new node at the beginning
  insertNode(&head, 0, 0);

  // Print the linked list again
  printList(head);

  return 0;
}
