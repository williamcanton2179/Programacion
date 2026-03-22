#include <iostream>
#include <string>

using namespace std;

class Empleado {
public:
    Empleado(string nom, string ape, int sal) {
        primerNombre = nom;
        apellidoPaterno = ape;
        establecerSalarioMensual(sal);
    }

    void establecerSalarioMensual(int sal) {
        // Si el salario es negativo, se establece en 0
        salarioMensual = (sal > 0) ? sal : 0;
    }

    int obtenerSalarioAnual() {
        return salarioMensual * 12;
    }

    void aplicarAumento() {
        salarioMensual = salarioMensual * 1.10; // Aumento del 10%
    }

private:
    string primerNombre;
    string apellidoPaterno;
    int salarioMensual;
};

int main() {
    Empleado emp1("Juan", "Perez", 3000);
    Empleado emp2("Ana", "Lopez", 4000);

    cout << "Salario anual Juan: " << emp1.obtenerSalarioAnual() << endl;
    cout << "Salario anual Ana: " << emp2.obtenerSalarioAnual() << endl;

    emp1.aplicarAumento();
    emp2.aplicarAumento();

    cout << "\nTras el aumento del 10%:" << endl;
    cout << "Nuevo salario anual Juan: " << emp1.obtenerSalarioAnual() << endl;
    cout << "Nuevo salario anual Ana: " << emp2.obtenerSalarioAnual() << endl;

    return 0;
}