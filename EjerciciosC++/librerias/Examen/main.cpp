#include "torneo.h"
#include <time.h>
#include <string.h>
//Nombres de equipos y valores
//William David Canton Fernandez - 9959 25 8558
int main()
{
    srand(time(NULL));

    Torneo t;

    strcpy(t.equipos[0], "Leones");
    strcpy(t.equipos[1], "Tigres");
    strcpy(t.equipos[2], "Aguilas");
    strcpy(t.equipos[3], "Toros");
    strcpy(t.equipos[4], "Piratas");
    strcpy(t.equipos[5], "Gigantes");
    strcpy(t.equipos[6], "Halcones");
    strcpy(t.equipos[7], "Lobos");

    t.simular();
    t.imprimir();

    return 0;
}
