#include <iostream>
#include <string>

using namespace std;

class Cuenta {
public:
    // El constructor valida que el saldo inicial no sea negativo
    Cuenta(int saldoInicial) {
        if (saldoInicial >= 0) {
            saldo = saldoInicial;
        } else {
            saldo = 0;
            cout << "Error: El saldo inicial era invalido. Se establecio en 0." << endl;
        }
    }

    void abonar(int monto) {
        saldo += monto;
    }

    // Valida que el retiro no exceda el saldo disponible
    void cargar(int monto) {
        if (monto <= saldo) {
            saldo -= monto;
        } else {
            cout << "El monto a cargar excede el saldo de la cuenta." << endl;
        }
    }

    int obtenerSaldo() {
        return saldo;
    }

private:
    int saldo;
};

int main() {
    Cuenta cuenta1(500);
    Cuenta cuenta2(-10); // Prueba de saldo invalido

    cout << "Saldo cuenta1: " << cuenta1.obtenerSaldo() << endl;
    cuenta1.cargar(200);
    cout << "Saldo cuenta1 tras retiro: " << cuenta1.obtenerSaldo() << endl;

    cuenta1.cargar(1000); // Prueba de retiro excesivo
    return 0;
}