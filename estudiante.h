#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

typedef struct {
    char nombres[50];
    char apellidos[50];
    char matricula[10];
    char usuario[30];
    char clave[30];
    char estado[10]; 
} Estudiante;


void gestionarEstudiante();
int crearEstudiante();
void editarEstudiante();
int verificarMatriculaEstudiante(const char *matricula);
int verificarUsuarioEstudiante(const char *usuario);

#endif 