#include <stdio.h>
#include <unistd.h>

int main(void) {
  printf("wait while processing\n");
  fflush(stdout);
  sleep(2);
  printf("ok \n");
  return 0;
}
