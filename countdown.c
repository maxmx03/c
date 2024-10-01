#include <stdio.h>
#include <unistd.h>

int main() {
  for (int number = 5; number > 0; number--) {
    if (number == 3)
      continue;
    printf("%d\n", number);
    sleep(1);
  }
  return 0;
}
