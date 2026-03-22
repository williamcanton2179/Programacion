#include <iostream>
using namespace std;

int main() {

    int op;

    do {
        cout << "Ingrese 1 o 2: ";
        cin >> op;
    } while (op != 1 && op != 2);

    cout << "Opcion valida";

    return 0;
}