#include <iostream>
using namespace std;

int main() {

    double h, t;

    cout << "Horas (-1 para salir): ";
    cin >> h;

    while(h != -1) {

        cout << "Tarifa: ";
        cin >> t;

        cout << "Salario: " << h * t << endl;

        cout << "Horas (-1 para salir): ";
        cin >> h;
    }

    return 0;
}