#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (!newNode) {
    printf("Erro ao alocar memória\n");
    exit(1);
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void insertAtBeginning(struct Node **head, int data) {
  Node *newNode = createNode(data);
  newNode->next = *head;
  *head = newNode;
}

void printList(struct Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    printf("%d ->", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

void freeList(struct Node *head) {
  struct Node *temp;
  while (head != NULL) {
    temp = head;
    head = head->next;
    free(temp);
  }
}

int main() {
  struct Node *head = NULL;

  insertAtBeginning(&head, 16);
  insertAtBeginning(&head, 20);
  insertAtBeginning(&head, 30);

  printf("Lista: ");
  printList(head);
  freeList(head);

  return 0;
}
