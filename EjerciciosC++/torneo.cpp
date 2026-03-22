// Ejemplo de utilizaci�n de matrices codigo heredado de C
//Declaraci�n de Bibliotecas y librerias estandar de C++
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;
//Declaraci�n de Constantes
#define NUMERO_EQUIPOS 8
#define DATOS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100
//Declaraci�n de Prototipos de Funci�n
void llamaCiclo();   //Funci�n que controla el Ciclo comparativo de datos por todas las facultades
int busquedaAleatorios(int minimo, int maximo); //Funci�n que permite obtener valores aleatorios en las notas de cada alumno
void llenarMatriz(float matriz[NUMERO_EQUIPOS][DATOS]); //Funci�n que permite asignar a cada alumno las notas aleatorios
void imprimirMatrizLinea(); //Funci�n que apoya el despliegue de titulos en el comparativo de facultades
float imprimirMatriz(float matriz[NUMERO_EQUIPOS][DATOS], char alumnos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad);
//Funci�n que permite el despliegue de cada facultad con sus alumnos y el calculo de promedios (menor y mayor)
int main()
{
    srand(getpid()); //Proceso preparativo para generaci�n de valores aleatorios
    llamaCiclo();
    return 0;
}
void llamaCiclo()
{
    //Declaraci�n de matrices por cada facultad
    float matriz_facultad_1[NUMERO_EQUIPOS][DATOS];
    float matriz_facultad_2[NUMERO_EQUIPOS][DATOS];
    float matriz_facultad_3[NUMERO_EQUIPOS][DATOS];
    char opcion;  //Variable que controla el ciclo de repetici�n
    bool repetir = true;  //Variable booleana del ciclo de repetici�n
    //Declaraci�n de variables flotantes para el calculo de promedios
    char alumnos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA] = {"Equipo 1","Equipo 2","Equipo 3","Equipo 4","Equipo 5", "Equipo 6","Equipo 7","Equipo 8"};
    //Ciclo repetitivo del comparativo de facultades
    do
    {
        system("cls");
        //Inicializar los promedios por facultad
        cout << "*** Comparativo de Facultades ***" << endl << endl;
        llenarMatriz(matriz_facultad_1);
imprimirMatriz(matriz_facultad_1, alumnos, "Facultad de Ingenieria");

llenarMatriz(matriz_facultad_2);
imprimirMatriz(matriz_facultad_2, alumnos, "Facultad de Arquitectura");

llenarMatriz(matriz_facultad_3);
imprimirMatriz(matriz_facultad_3, alumnos, "Facultad de Administracion");
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n')
        {
            repetir=false;
        }
    } while (repetir);
}
int busquedaAleatorios(int minimo, int maximo)
{
    //Calculo de valores aleatorios tomando como base la nota minima y m�xima del parcial
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_EQUIPOS][DATOS])
{
    // primero inicializamos todo en 0
    for(int i = 0; i < NUMERO_EQUIPOS; i++)
    {
        for(int j = 0; j < DATOS; j++)
        {
            matriz[i][j] = 0;
        }
    }

    // luego simulamos partidos
    for(int i = 0; i < NUMERO_EQUIPOS; i++)
    {
        for(int j = i + 1; j < NUMERO_EQUIPOS; j++)
        {
            // aquí va la simulación
            int ganador = busquedaAleatorios(0,1);

if (ganador == 0)
{
    matriz[i][1]++;      // gana equipo i
    matriz[i][3] += 3;   // suma 3 puntos

    matriz[j][2]++;      // pierde equipo j
}
else
{
    matriz[j][1]++;
    matriz[j][3] += 3;

    matriz[i][2]++;
}

// ambos jugaron un partido
matriz[i][0]++;
matriz[j][0]++;
        }
    }
}

void imprimirMatrizLinea()
{
    //Funci�n que despliega titulo de cada nota calculada
    int x;

    cout << "+--------";
    for (x = 0; x < DATOS + 1; x++)
    {
        cout << "+---------";
    }
    cout << "+\n";
}
float imprimirMatriz(float matriz[NUMERO_EQUIPOS][DATOS],
                     char alumnos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA],
                     string nombreFacultad)
{
    int y;

cout << "\nTABLA DE POSICIONES - " << nombreFacultad << endl;
imprimirMatrizLinea();

cout << setw(10) << "Equipo"
     << setw(10) << "J"
     << setw(10) << "G"
     << setw(10) << "P"
     << setw(10) << "Pts" << endl;

imprimirMatrizLinea();

for (y = 0; y < NUMERO_EQUIPOS; y++)
{
    cout << setw(10) << alumnos[y]
         << setw(10) << matriz[y][0]   // Jugados
         << setw(10) << matriz[y][1]   // Ganados
         << setw(10) << matriz[y][2]   // Perdidos
         << setw(10) << matriz[y][3]   // Puntos
         << endl;
}

imprimirMatrizLinea();

return 0;
}