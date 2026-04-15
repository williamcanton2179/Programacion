#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <iomanip>
using namespace std;

#define NUMERO_EQUIPOS 8
#define DATOS 4

class Torneo
{
public:
    float matriz[NUMERO_EQUIPOS][DATOS];
    char equipos[NUMERO_EQUIPOS][20];

    void simular();
    void imprimir();
    int aleatorio(int min, int max);
};

#endif
