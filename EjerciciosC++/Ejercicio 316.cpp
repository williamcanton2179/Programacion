#include <iostream>
#include <string>

using namespace std;

class FrecuenciasCardiacas {
public:
    // Constructor que recibe todos los datos como parámetros
    FrecuenciasCardiacas(string nom, string ape, int m, int d, int a) {
        primerNombre = nom;
        apellido = ape;
        mesNacimiento = m;
        diaNacimiento = d;
        anioNacimiento = a;
    }

    // Funciones establecer (Set)
    void establecerPrimerNombre(string nom) { primerNombre = nom; }
    void establecerApellido(string ape) { apellido = ape; }
    void establecerMes(int m) { mesNacimiento = m; }
    void establecerDia(int d) { diaNacimiento = d; }
    void establecerAnio(int a) { anioNacimiento = a; }

    // Funciones obtener (Get)
    string obtenerPrimerNombre() { return primerNombre; }
    string obtenerApellido() { return apellido; }

    // Calcula la edad basándose en la fecha actual proporcionada por el usuario
    int obtenerEdad(int mesAct, int diaAct, int anioAct) {
        int edad = anioAct - anioNacimiento;
        if (mesAct < mesNacimiento || (mesAct == mesNacimiento && diaAct < diaNacimiento)) {
            edad--;
        }
        return edad;
    }

    // Fórmula: 220 - edad
    int obtenerFrecuenciaCardiacaMaxima(int edad) {
        return 220 - edad;
    }

    // Muestra el rango entre el 50% y el 85% de la máxima
    void mostrarFrecuenciaEsperada(int max) {
        cout << "Rango esperado: " << (max * 0.5) << " - " << (max * 0.85) << " pulsos por minuto." << endl;
    }

private:
    string primerNombre;
    string apellido;
    int mesNacimiento;
    int diaNacimiento;
    int anioNacimiento;
};

int main() {
    string nombre, apellido;
    int m, d, a, mAct, dAct, aAct;

    cout << "Ingrese nombre y apellido: ";
    cin >> nombre >> apellido;
    cout << "Ingrese fecha de nacimiento (mes dia anio): ";
    cin >> m >> d >> a;

    // Crear instancia del objeto
    FrecuenciasCardiacas persona(nombre, apellido, m, d, a);

    cout << "\nIngrese la fecha actual (mes dia anio): ";
    cin >> mAct >> dAct >> aAct;

    int edad = persona.obtenerEdad(mAct, dAct, aAct);
    int fMax = persona.obtenerFrecuenciaCardiacaMaxima(edad);

    cout << "\n--- INFORMACION ---" << endl;
    cout << "Nombre: " << persona.obtenerPrimerNombre() << " " << persona.obtenerApellido() << endl;
    cout << "Edad: " << edad << " anios" << endl;
    cout << "Frecuencia Cardiaca Maxima: " << fMax << endl;
    persona.mostrarFrecuenciaEsperada(fMax);

    return 0;
}