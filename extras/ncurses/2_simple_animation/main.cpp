#include <ncurses.h>
#include <unistd.h>
//using namespace std;

const char *arr[10] = {" x ",
				 	   " x ",
					   " x ",
					   " x ",
					   " x ",
					   " x ",
					   " x ",
					   " x ",
					   "\\x/",
					   " V "};

int main() {
	initscr();
	noecho();
	curs_set(FALSE);
	refresh();
	const int time = 100000;
	while (true){
		for (int i = 1; i <= 10; i++) {
			mvaddch(i, 1, arr[i-1][0]);
			mvaddch(i, 2, arr[i-1][1]);
			mvaddch(i, 3, arr[i-1][2]);
			refresh();
			usleep(time);
		}
		for (int i = 1; i <= 10; i++) {
			mvprintw(i, 1, " ");
			mvprintw(i, 2, " ");
			mvprintw(i, 3, " ");
			refresh();
			usleep(time);
		}
	}
	sleep(1);
	endwin();
}

