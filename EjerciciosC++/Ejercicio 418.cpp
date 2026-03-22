#include <iostream>
using namespace std;

int main() {

    int num, mayor;

    cout << "Ingrese numero: ";
    cin >> mayor;

    for (int i = 2; i <= 10; i++) {
        cout << "Ingrese numero: ";
        cin >> num;

        if (num > mayor) {
            mayor = num;
        }
    }

    cout << "Mayor: " << mayor;

    return 0;
}