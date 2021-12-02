#include <ncurses.h>

int main() {
    int m = 80;
    int n = 24;
    initscr();
    for( int p = n / 2 - 1; p >= 0; p-- ) {

        for( int j = p; j < m - p - 1; j++ ) {
            mvaddch( p,  j, '*' );
            refresh();
            napms( 30 ) ;
        }

        for( int i = p; i < n - p - 1; i++ ) {
            mvaddch( i, m - p - 1, '*' );
            refresh();
            napms( 30 );
        }

        for( int j = m - p - 1; j > p - 2; j-- ) {
            mvaddch( n - p - 1, j, '*' );
            refresh();
            napms( 30 );
        }

        for ( int i = n - p - 1; i >= p; i-- ) {
            mvaddch( i, p - 1, '*' );
            refresh();
            napms( 30 );
        }
    }
    getch();
    endwin();
    return 0;
}