#include <stdio.h>
#define F fflush(stdout);

enum Operations {
  ADDITION = 1,
  SUBTRACTION,
  MULTIPLICATION,
  DIVISION,
};

void addition(int *target, int a, int b) {
  *target = a + b;
  return;
}

void subtraction(int *target, int a, int b) {
  *target = a - b;
  return;
}

void division(int *target, int a, int b) {
  *target = a / b;
  return;
}

void multiplication(int *target, int a, int b) {
  *target = a * b;
  return;
}

int main() {
  int x, y, op, result;
  void (*fp)(int *, int, int);
  printf("Press 1 for addition, 2 for subtraction, 3 for division, 4 for "
         "multiplication and 0 to quit: ");
  scanf("%d", &op);

  switch (op) {
  case ADDITION:
    fp = addition;
    break;
  case SUBTRACTION:
    fp = subtraction;
    break;
  case DIVISION:
    fp = division;
    break;
  case MULTIPLICATION:
    fp = multiplication;
    break;
  default:
    return 0;
  }

  printf("Number 1: ");
  F;
  scanf("%d", &x);

  printf("Number 2: ");
  F;
  scanf("%d", &y);

  fp(&result, x, y);

  printf("\nResult: %d\n", result);

  return 0;
}
