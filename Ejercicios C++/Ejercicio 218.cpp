#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << a << " es mas grande";
    else if (b > a)
        cout << b << " es mas grande";
    else
        cout << "Estos numeros son iguales";

    return 0;
}
