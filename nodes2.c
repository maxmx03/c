#include <stdio.h>
#include <stdlib.h>

#define nil NULL

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *head = nil;
Node *tail = nil;

void link(int data) {
  Node *new = (Node *)malloc(sizeof(Node));
  new->data = data;
  new->next = nil;

  if (head == nil) {
    head = new;
    tail = new;
  } else {
    tail->next = new;
    tail = new;
  }

  return;
}

void print_links() {
  Node *track = head;
  while (track != nil) {
    printf("\n%d", track->data);
    track = track->next;
  }

  return;
}

void free_links() {
  Node *track = head;
  Node *temp;

  while (track != nil) {
    temp = track;
    track = track->next;
    free(temp);
  }
}

int main() {

  for (int i = 0; i <= 1000; i++) {
    link(i);
  }

  print_links();
  free_links();

  return 0;
}
