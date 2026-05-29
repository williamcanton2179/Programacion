//William Canton-9959258558
#ifndef EXAMEN_H
#define EXAMEN_H
#include <string>
using namespace std;
struct Alumno {
    string usuario;
    string contrasena;
    string correo;
};

void registrarBitacora(string accion);
void registrarAlumno();
void mostrarAlumnos();
void modificarOEliminarAlumno(string usuarioBuscar, bool buscarParaEliminar);

#endif
