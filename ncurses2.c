/* ncurses.c */
#include <ncurses.h>

int main() {
  int x, y;
  initscr();
  getyx(stdscr, y, x); // current position of the cursor
  printw("x = %d\n"
         "y = %d",
         x, y);
  refresh();

  y = 5;
  x = 10;

  move(x, y);
  printw("Over here!");
  refresh();

  getch();
  endwin();

  return 0;
}
