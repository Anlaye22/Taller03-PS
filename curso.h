#ifndef CURSO_H
#define CURSO_H

typedef struct {
    char codigo[10]; // Código único del curso
    char codigoMateria[10]; // Relación con la materia
    char ccProfesor[15]; // Relación con el profesor
    char fechaInicio[11]; // Formato DD/MM/AAAA
    char fechaFin[11]; // Formato DD/MM/AAAA
    char estudiantes[300]; // Matrículas separadas por '/', máximo 30
} Curso;


bool verificarCodigoCurso();
void crearCurso();
void editarCurso();

#endif
