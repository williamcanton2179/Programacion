#include "Alumnos.h"
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
    cout << "\n--- REGISTRAR ALUMNO ---" << endl;
    cout << "Usuario: "; cin >> nuevo.usuario;
    cout << "Contrasena: "; cin >> nuevo.contrasena;
    cout << "Correo: "; cin >> nuevo.correo;

    ofstream archivoAlumnos("alumnos.txt", ios::app);
    if (archivoAlumnos.is_open()) {
        archivoAlumnos << nuevo.usuario << " " << nuevo.contrasena << " " << nuevo.correo << endl;
        archivoAlumnos.close();
        cout << "¡Alumno guardado con exito!" << endl;
        registrarBitacora("Registro al alumno: " + nuevo.usuario);
    }
}

void mostrarAlumnos() {
    ifstream archivoAlumnos("alumnos.txt");
    string usuario, contrasena, correo;
    cout << "\n--- LISTA DE ALUMNOS ---" << endl;
    while (archivoAlumnos >> usuario >> contrasena >> correo) {
        cout << "Usuario: " << usuario << " | Correo: " << correo << endl;
    }
    archivoAlumnos.close();
    registrarBitacora("Consulto la lista de alumnos.");
}

void modificarOEliminarAlumno(string usuarioBuscar, bool buscarParaEliminar) {
    ifstream archivoOriginal("alumnos.txt");
    ofstream archivoTemporal("temporal.txt");
    string usuario, contrasena, correo;
    bool encontrado = false;

    while (archivoOriginal >> usuario >> contrasena >> correo) {
        if (usuario == usuarioBuscar) {
            encontrado = true;
            if (buscarParaEliminar) {
                cout << "¡Alumno eliminado!" << endl;
                registrarBitacora("Elimino al alumno: " + usuarioBuscar);
            } else {
                string nuevaClave, nuevoCorreo;
                cout << "Nueva contrasena: "; cin >> nuevaClave;
                cout << "Nuevo correo: "; cin >> nuevoCorreo;
                archivoTemporal << usuario << " " << nuevaClave << " " << nuevoCorreo << endl;
                cout << "¡Modificado con exito!" << endl;
                registrarBitacora("Modifico al alumno: " + usuarioBuscar);
            }
        } else {
            archivoTemporal << usuario << " " << contrasena << " " << correo << endl;
        }
    }
    archivoOriginal.close();
    archivoTemporal.close();
    remove("alumnos.txt");
    rename("temporal.txt", "alumnos.txt");

    if (!encontrado) cout << "Alumno no encontrado." << endl;
}
