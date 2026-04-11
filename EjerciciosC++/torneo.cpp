#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

#define NUMERO_EQUIPOS 8
#define DATOS 4
#define MAXIMA_LONGITUD_CADENA 100

void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_EQUIPOS][DATOS]);
void imprimirMatrizLinea();
void imprimirMatriz(float matriz[NUMERO_EQUIPOS][DATOS],
                    char alumnos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA],
                    string nombreEquipo);

int main()
{
    srand(time(NULL));
    llamaCiclo();
    return 0;
}

void llamaCiclo()
{
    float matriz_equipo_1[NUMERO_EQUIPOS][DATOS];
    float matriz_equipo_2[NUMERO_EQUIPOS][DATOS];
    float matriz_equipo_3[NUMERO_EQUIPOS][DATOS];

    char opcion;
    bool repetir = true;

    char alumnos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA] = {
        "Equipo 1","Equipo 2","Equipo 3","Equipo 4",
        "Equipo 5","Equipo 6","Equipo 7","Equipo 8"
    };

    do
    {
        system("cls");

        cout << "*** Comparativo de Torneo ***" << endl << endl;

        llenarMatriz(matriz_equipo_1);
        imprimirMatriz(matriz_equipo_1, alumnos, "Leones");

        llenarMatriz(matriz_equipo_2);
        imprimirMatriz(matriz_equipo_2, alumnos, "Gallos");

        llenarMatriz(matriz_equipo_3);
        imprimirMatriz(matriz_equipo_3, alumnos, "Tigres");

        cout << "\nDesea otro calculo (s/n)? ";
        cin >> opcion;

        if (opcion == 'n' || opcion == 'N')
        {
            repetir = false;
        }

    } while (repetir);
}

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() % (maximo - minimo + 1);
}

void llenarMatriz(float matriz[NUMERO_EQUIPOS][DATOS])
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
            int ganador = busquedaAleatorios(0,1);

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

void imprimirMatrizLinea()
{
    cout << "+--------";
    for (int x = 0; x < DATOS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}

void imprimirMatriz(float matriz[NUMERO_EQUIPOS][DATOS],
                    char alumnos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA],
                    string nombreFacultad)
{
    cout << "\nTABLA DE POSICIONES - " << nombreFacultad << endl;

    imprimirMatrizLinea();

    cout << setw(10) << "Equipo"
         << setw(10) << "J"
         << setw(10) << "G"
         << setw(10) << "P"
         << setw(10) << "Pts" << endl;

    imprimirMatrizLinea();

    for (int y = 0; y < NUMERO_EQUIPOS; y++)
    {
        cout << setw(10) << alumnos[y]
             << setw(10) << matriz[y][0]
             << setw(10) << matriz[y][1]
             << setw(10) << matriz[y][2]
             << setw(10) << matriz[y][3]
             << endl;
    }

    imprimirMatrizLinea();
}
