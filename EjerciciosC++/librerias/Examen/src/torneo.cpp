#include "torneo.h"
#include <stdlib.h>
//Etiquetas del programa
//William David Canton Fernandez - 9959 25 8558
int Torneo::aleatorio(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void Torneo::simular()
{
    for(int i = 0; i < NUMERO_EQUIPOS; i++)
    {
        for(int j = 0; j < DATOS; j++)
        {
            matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < NUMERO_EQUIPOS; i++)
    {
        for(int j = i + 1; j < NUMERO_EQUIPOS; j++)
        {
            int ganador = aleatorio(0,1);

            if (ganador == 0)
            {
                matriz[i][1]++;
                matriz[i][3] += 3;
                matriz[j][2]++;
            }
            else
            {
                matriz[j][1]++;
                matriz[j][3] += 3;
                matriz[i][2]++;
            }

            matriz[i][0]++;
            matriz[j][0]++;
        }
    }
}
//imprime los datos que iran en la tabla
void Torneo::imprimir()
{
    cout << "\nTABLA DE POSICIONES\n";

    cout << setw(10) << "Equipo"
         << setw(10) << "J"
         << setw(10) << "G"
         << setw(10) << "P"
         << setw(10) << "Pts" << endl;

    for (int i = 0; i < NUMERO_EQUIPOS; i++)
    {
        cout << setw(10) << equipos[i]
             << setw(10) << matriz[i][0]
             << setw(10) << matriz[i][1]
             << setw(10) << matriz[i][2]
             << setw(10) << matriz[i][3]
             << endl;
    }
}
