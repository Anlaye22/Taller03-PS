#ifndef PROFESOR_H
#define PROFESOR_H

typedef struct {
    char nombres[50];
    char apellidos[50];
    char cc[15]; // Cédula de ciudadanía (única)
    char usuario[20]; // Usuario único
    char clave[20];
    char estado[10]; // Activo o Inactivo
    char materias[200]; // Lista de códigos de materias separados por '/'
} Profesor;

// Prototipos de funciones
void cargarProfesoresDesdeArchivo(const char *nombreArchivo, Profesor profesores[], int *total);
void guardarProfesoresEnArchivo(const char *nombreArchivo, Profesor profesores[], int total);
void crearProfesor(Profesor profesores[], int *total);
void editarProfesor(Profesor profesores[], int total);

#endif
