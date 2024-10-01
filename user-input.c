#include <stdio.h>
#include <string.h>

struct Person {
  char name[20];
  char lastname[40];
  int age;
  float height;
};

int main() {
  struct Person person;

  puts("What's your name?");
  fgets(person.name, sizeof(person.name), stdin);
  person.name[strcspn(person.name, "\n")] = '\0';

  puts("What's your lastname?");
  fgets(person.lastname, sizeof(person.lastname), stdin);
  person.lastname[strcspn(person.lastname, "\n")] = '\0';

  puts("What's your age?");
  scanf("%d", &person.age);

  puts("What's your height?");
  scanf("%f", &person.height);

  printf("Welcome %s %s, you have %d years old, and your height is: %.2f\n",
         person.name, person.lastname, person.age, person.height);
  return 0;
}
