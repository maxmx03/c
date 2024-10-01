#include <stdio.h>

int main() {
  int size = 0;
  printf("Please enter a size for your triangle (1-20): ");
  scanf("%d", &size);

  for (int i = 1; i <= size; i++) {
    for (int j = 0; j < size - i; j++) {
      printf(" ");
    }
    for (int k = 0; k < i; k++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
