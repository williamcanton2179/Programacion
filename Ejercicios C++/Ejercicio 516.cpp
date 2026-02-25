#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double capital, tasa;

    cout << "Ingrese capital inicial: ";
    cin >> capital;

    cout << "Ingrese tasa (ejemplo 0.05): ";
    cin >> tasa;

    for(int anio = 1; anio <= 10; anio++) {
        double total = capital * pow(1 + tasa, anio);
        cout << "Anio " << anio << ": " << total << endl;
    }

    return 0;
}