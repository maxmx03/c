#include <stdio.h>
#include <string.h>

int main() {
  char str[32];
  char *p;

  strncpy(str, "I like apples", 31);
  p = str;
  printf("%c\n", *p);
  p++;
  printf("%s\n", p);

  return 0;
}
