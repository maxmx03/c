#include <math.h>
#include <stdio.h>

int input(char *s, float *n) {
  printf("%s", s);
  return scanf("%f", n);
}

int main(void) {
  float pi, r, answer;
  input("what is the R in cm?\n", &r);
  pi = 3.14;
  answer = powf(r, 2) * pi;
  printf("The area is %.2f\n", answer);
  return 0;
}
