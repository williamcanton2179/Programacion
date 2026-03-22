#include <iostream>
using namespace std;

int main() {

    int opcion;

    do {

        cout << "\nMENU\n";
        cout << "1. Mostrar numeros del 1 al 10\n";
        cout << "2. Mostrar numeros pares del 1 al 20\n";
        cout << "3. Salir\n";
        cout << "Seleccione opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                for(int i = 1; i <= 10; i++) {
                    cout << i << endl;
                }
                break;

            case 2:
                for(int i = 2; i <= 20; i += 2) {
                    cout << i << endl;
                }
                break;

            case 3:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

    } while(opcion != 3);

    return 0;
}