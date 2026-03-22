#include <iostream>
using namespace std;

int main() {

    int secreto = 7;
    int intento;

    do {
        cout << "Adivine el numero: ";
        cin >> intento;

        if (intento < secreto)
            cout << "Muy bajo" << endl;
        else if (intento > secreto)
            cout << "Muy alto" << endl;

    } while (intento != secreto);

    cout << "Correcto";

    return 0;
}