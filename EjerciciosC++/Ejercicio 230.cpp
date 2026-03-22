#include <iostream>
using namespace std;

int main() {
    int peso, altura;
    cin >> peso >> altura;

    int bmi = (peso * 703) / (altura * altura);
    cout << "BMI: " << bmi << endl;

    return 0;
}
