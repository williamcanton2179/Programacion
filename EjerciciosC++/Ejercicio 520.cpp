#include <iostream>
using namespace std;

int main() {

    int numero, suma = 0, contador = 0;
    double promedio;

    cout << "Ingrese numeros (0 para terminar): ";
    cin >> numero;

    while(numero != 0) {
        suma += numero;
        contador++;
        cin >> numero;
    }

    if(contador > 0) {
        promedio = (double)suma / contador;
        cout << "Promedio: " << promedio;
    } else {
        cout << "No se ingresaron datos.";
    }

    return 0;
}