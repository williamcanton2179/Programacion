#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double capital = 1000.0;

    for(double tasa = 0.05; tasa <= 0.10; tasa += 0.01) {

        cout << "\nTasa: " << tasa * 100 << "%" << endl;
        cout << "Anio    Monto" << endl;

        for(int anio = 1; anio <= 10; anio++) {
            double total = capital * pow(1 + tasa, anio);
            cout << anio << "       " << total << endl;
        }
    }

    return 0;
}