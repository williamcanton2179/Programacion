#include <iostream>
using namespace std;

int main() {

    int cuenta;
    double saldo, cargos, creditos, limite, nuevo;

    cout << "Cuenta (-1 para salir): ";
    cin >> cuenta;

    while (cuenta != -1) {

        cout << "Saldo: ";
        cin >> saldo;

        cout << "Cargos: ";
        cin >> cargos;

        cout << "Creditos: ";
        cin >> creditos;

        cout << "Limite: ";
        cin >> limite;

        nuevo = saldo + cargos - creditos;

        cout << "Nuevo saldo: " << nuevo << endl;

        if (nuevo > limite) {
            cout << "Limite excedido" << endl;
        }

        cout << "\nCuenta (-1 para salir): ";
        cin >> cuenta;
    }

    return 0;
}