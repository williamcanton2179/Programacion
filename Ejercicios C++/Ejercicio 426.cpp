#include <iostream>
using namespace std;

int main() {

    int n, d1, d2, d4, d5;

    cout << "Ingrese numero de 5 digitos: ";
    cin >> n;

    d1 = n / 10000;
    d2 = (n / 1000) % 10;
    d4 = (n / 10) % 10;
    d5 = n % 10;

    if(d1 == d5 && d2 == d4)
        cout << "Es palindromo";
    else
        cout << "No es palindromo";

    return 0;
}