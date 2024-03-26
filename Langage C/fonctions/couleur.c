#include <stdio.h>
#include <curses.h>
#include <unistd.h>

void dessinerTriangleRectangle(int taille, int couleur);

int main() {
    // Initialisation de la bibliothèque curses
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_BLUE, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    keypad(stdscr, TRUE);  // Permet d'utiliser les touches spéciales

    int taille, couleur;

    // Saisie de la taille et de la couleur
    printw("Entrez la taille du triangle rectangle : ");
    scanw("%d", &taille);

    printw("Choisissez une couleur pour le triangle rectangle : \n");
    printw("1. Rouge\n");
    printw("2. Bleu\n");
    printw("3. Vert\n");
    scanw("%d", &couleur);

    // Dessiner le triangle rectangle
    dessinerTriangleRectangle(taille, couleur);

    // Attendre avant de terminer
    getch();

    // Terminaison de la bibliothèque curses
    endwin();

    return 0;
}

void dessinerTriangleRectangle(int taille, int couleur) {
    // Initialiser les couleurs
    attron(COLOR_PAIR(couleur));

    // Dessiner le triangle rectangle
    for (int i = 0; i < taille; i++) {
        for (int j = 0; j <= i; j++) {
            mvaddch(i, j, '*');
        }
    }

    // Rafraîchir l'écran pour afficher le dessin
    refresh();

    // Attente avant de continuer (simulation du temps définit en secondes)
    sleep(1);

    // Désactiver les couleurs
    attroff(COLOR_PAIR(couleur));
}
