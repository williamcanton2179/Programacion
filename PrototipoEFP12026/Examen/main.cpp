#include <iostream>
#include "Alumno.h" // Importamos nuestra propia librería

using namespace std;

int main() {
    int opcion;
    string usuarioBuscar;

    do {
        cout << "\n===== BIENVENIDO AL CRUD =====" << endl;
        cout << "1. Registrar Alumno" << endl;
        cout << "2. Mostrar Alumnos" << endl;
        cout << "3. Modificar Alumno" << endl;
        cout << "4. Eliminar Alumno" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarAlumno(); // Llamamos a la función de la librería
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
