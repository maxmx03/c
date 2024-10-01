#include <stdio.h>
#include <string.h>

void input(char *s, int size) {
  fgets(s, size, stdin);
  s[strcspn(s, "\n")] = '\0';
}

int main(void) {
  char name[50];
  char lastname[100];
  printf("What is your name\n");
  input(name, sizeof(name));

  printf("What is your lastname\n");
  input(lastname, sizeof(lastname));

  printf("Welcome %s %s", name, lastname);
  return 0;
}
