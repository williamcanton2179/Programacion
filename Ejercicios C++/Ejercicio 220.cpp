#include <iostream>
using namespace std;

int main() {
    int r;
    const double PI = 3.14159;

    cin >> r;
    cout << "Diametro: " << 2 * r << endl;
    cout << "Circunferencia: " << 2 * PI * r << endl;
    cout << "Area: " << PI * r * r << endl;

    return 0;
}
