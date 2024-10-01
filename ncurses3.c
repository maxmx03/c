#include <ncurses.h>

int main() {
  int key, x, y;
  initscr();
  keypad(stdscr, TRUE);
  noecho(); // doesnt show character we type on screen
  x = y = 5;

  while (key != 'q') {
    clear();
    move(0, 0);
    printw("Press left or right arrow - exit by pressing: q");

    move(y, x);
    printw("0");
    refresh();

    key = getch();
    if (key == KEY_LEFT) {
      x--;
      if (x < 0)
        x = 0;
    } else if (key == KEY_RIGHT) {
      x++;
      if (x > 30)
        x = 30;
    }
  }

  endwin();
  return 0;
}