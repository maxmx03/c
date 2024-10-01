#include <stdio.h>

int input(char *s, int *n) {
  printf("%s", s);
  if (scanf("%d", n) == EOF) {
    puts("error: input");
    return 1;
  }
  return 0;
}

int main(void) {
  int x, y, answer;
  int ok1, ok2;
  ok1 = input("insert x: ", &x);
  ok2 = input("insert y: ", &y);
  if (ok1 == 0 && ok2 == 0) {
    answer = x + y;
    printf("%d + %d = %d", x, y, answer);
    return 0;
  }
  puts("something went wrong");
  return 1;
}
