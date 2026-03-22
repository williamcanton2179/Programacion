#include <iostream>
using namespace std;

int main() {

    int numero;

    do {
        cout << "Ingrese numero positivo: ";
        cin >> numero;
    } while(numero <= 0);

    cout << "Numero valido ingresado.";

    return 0;
}