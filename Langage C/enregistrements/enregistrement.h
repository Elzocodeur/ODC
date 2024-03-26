#ifndef enregistrement
#define enregistrement
#include <stdio.h>
#include <math.h>

typedef struct Point
{
    float x;
    float y;
} Point;

float distance(Point A, Point B)
{
    float dx = B.x - A.x;
    float dy = B.y - A.y;
    return sqrt(dx * dx + dy * dy);
}

void saisir_point(Point *P)
{
    printf("Entrez les coordonnées du point (x, y) : ");
    scanf("%f %f", &P->x, &P->y);
}
#endif