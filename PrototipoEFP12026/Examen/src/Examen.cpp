//William Canton-9959258558
#include "Examen.h"
#include <iostream>
#include <fstream>

using namespace std;

void registrarBitacora(string accion) {
    ofstream archivoBitacora("bitacora.txt", ios::app);
    if (archivoBitacora.is_open()) {
        archivoBitacora << "ACCION: " << accion << endl;
        archivoBitacora.close();
    }
}

void registrarAlumno() {
    Alumno nuevo;
    cout << "\n--- REGISTRAR EMPLEADO ---" << endl;
    cout << "Usuario: "; cin >> nuevo.usuario;
    cout << "Contrasena: "; cin >> nuevo.contrasena;
    cout << "Correo: "; cin >> nuevo.correo;

    ofstream archivoAlumnos("Empleados.txt", ios::app);
    if (archivoAlumnos.is_open()) {
        archivoAlumnos << nuevo.usuario << " " << nuevo.contrasena << " " << nuevo.correo << endl;
        archivoAlumnos.close();
        cout << "¡Empleado guardado con exito!" << endl;
        registrarBitacora("Registro al Empleado: " + nuevo.usuario);
    }
}

void mostrarAlumnos() {
    ifstream archivoAlumnos("Empleados.txt");
    string usuario, contrasena, correo;
    cout << "\n--- LISTA DE EMPLEADOS ---" << endl;
    while (archivoAlumnos >> usuario >> contrasena >> correo) {
        cout << "Usuario: " << usuario << " | Correo: " << correo << endl;
    }
    archivoAlumnos.close();
    registrarBitacora("Consulto la lista de Empleados.");
}

void modificarOEliminarAlumno(string usuarioBuscar, bool buscarParaEliminar) {
    ifstream archivoOriginal("Empleados.txt");
    ofstream archivoTemporal("temporal.txt");
    string usuario, contrasena, correo;
    bool encontrado = false;

    while (archivoOriginal >> usuario >> contrasena >> correo) {
        if (usuario == usuarioBuscar) {
            encontrado = true;
            if (buscarParaEliminar) {
                cout << "¡Empleado eliminado!" << endl;
                registrarBitacora("Elimino al empleado: " + usuarioBuscar);
            } else {
                string nuevaClave, nuevoCorreo;
                cout << "Nueva contrasena: "; cin >> nuevaClave;
                cout << "Nuevo correo: "; cin >> nuevoCorreo;
                archivoTemporal << usuario << " " << nuevaClave << " " << nuevoCorreo << endl;
                cout << "¡Modificado con exito!" << endl;
                registrarBitacora("Modifico al empleado: " + usuarioBuscar);
            }
        } else {
            archivoTemporal << usuario << " " << contrasena << " " << correo << endl;
        }
    }
    archivoOriginal.close();
    archivoTemporal.close();
    remove("Empleados.txt");
    rename("temporal.txt", "Empleados.txt");

    if (!encontrado) cout << "Empleado no encontrado." << endl;
}
