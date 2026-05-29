//William Canton-9959258558
#include <iostream>
#include "Examen.h"

using namespace std;

int main() {
    int opcion;
    string usuarioBuscar;

    do {
        cout << "\n===== BIENVENIDO AL CRUD =====" << endl;
        cout << "1. Registrar Empleado" << endl;
        cout << "2. Mostrar Empleados" << endl;
        cout << "3. Modificar Empleados" << endl;
        cout << "4. Eliminar Empleado" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarAlumno();
                break;
            case 2:
                mostrarAlumnos();
                break;
            case 3:
                cout << "Usuario a modificar: "; cin >> usuarioBuscar;
                modificarOEliminarAlumno(usuarioBuscar, false);
                break;
            case 4:
                cout << "Usuario a eliminar: "; cin >> usuarioBuscar;
                modificarOEliminarAlumno(usuarioBuscar, true);
                break;
            case 5:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 5);

    return 0;
}
