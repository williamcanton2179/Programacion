#include <iostream>
using namespace std;

int main() {

    int num, suma = 0;

    for(int i = 1; i <= 10; i++) {
        cout << "Ingrese numero: ";
        cin >> num;
        suma = suma + num;
    }

    cout << "Suma total: " << suma;

    return 0;
}