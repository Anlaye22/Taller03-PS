#ifndef CURSO_H
#define CURSO_H


typedef struct{
    char Codigo[15];
    char Materia[30];
    char CCProfesor[30];
    char FInicio[15];
    char FFinal[15];
    char LEstudiante[300];
} Curso;

void gestionarEstudiante();
int crearEstudiante();
void editarEstudiante();
int verificarCodigoCurso(const char *Codigo);

#endif