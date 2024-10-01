#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void input(char *msg, int *n) {
  printf("%s", msg);
  scanf("%d", n);
}

int myrandom() {
  int dice;
  dice = rand() % 6 + 1;
  return dice;
}

int main() {
  srand(getpid());
  float balance = 1000;
  bool playing = true;
  int bet, guess;

  while (playing) {
    printf("Balance: %.2f\n", balance);
    input("Make your bet: ", &bet);
    input("Make your guess (1-6, and 0 means quit):", &guess);

    printf("Throwing the dice...\n");
    sleep(2);
    int dice = myrandom();
    srand(dice);

    printf("dice: %d\n", dice);

    if (bet == 0) {
      playing = false;
    } else if (balance < 1) {
      puts("Game Over!");
      playing = false;
    } else if (dice == guess) {
      bet *= 3;
      balance += bet;
      puts("You win\n");
    } else {
      balance -= bet;
      puts("You lost");
    }
  }

  for (int i = 5; i > 0; i--) {
    printf("exiting in %ds\n", i);
    sleep(1);
  }

  return 0;
}
