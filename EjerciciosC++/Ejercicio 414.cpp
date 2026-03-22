#include <iostream>
using namespace std;

int main() {

    int cuenta;
    double saldo, cargos, creditos, limite, nuevo;

    cout << "Numero de cuenta: ";
    cin >> cuenta;

    cout << "Saldo inicial: ";
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
        cout << "Limite excedido";
    }

    return 0;
}