#include <ncurses.h>

int main() {
    initscr();      // Inicializar ncurses
    noecho();       // No mostrar la entrada del teclado en pantalla
    cbreak();       // Permitir entrada de teclado sin necesidad de Enter
    keypad(stdscr, TRUE);  // Habilitar teclas especiales

    // Crear una ventana
    WINDOW *win = newwin(10, 30, 5, 10);
    box(win, 0, 0);  // Dibujar un borde alrededor de la ventana
    wrefresh(win);

    // Mostrar un mensaje en la ventana
    mvwprintw(win, 1, 1, "Hola, ncurses!");
    wrefresh(win);

    // Esperar una tecla para salir
    getch();

    // Limpiar y cerrar ncurses
    endwin();

    return 0;
}

