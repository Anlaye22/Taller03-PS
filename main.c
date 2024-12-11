#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "materia.h"
#include "estudiante.h"
#include "profesor.h"
#include "curso.h"

#define MAX_MATERIAS 100
#define MAX_ESTUDIANTES 100
#define MAX_PROFESORES 50
#define MAX_CURSOS 50

int main() {
    Materia materias[MAX_MATERIAS];
    Estudiante estudiantes[MAX_ESTUDIANTES];
    Profesor profesores[MAX_PROFESORES];
    Curso cursos[MAX_CURSOS];
    
    int totalMaterias = 0, totalEstudiantes = 0, totalProfesores = 0, totalCursos = 0;

    // Cargar datos desde los archivos
    cargarMateriasDesdeArchivo("materias.txt", materias, &totalMaterias);
    cargarEstudiantesDesdeArchivo("estudiantes.txt", estudiantes, &totalEstudiantes);
    cargarProfesoresDesdeArchivo("profesores.txt", profesores, &totalProfesores);
    cargarCursosDesdeArchivo("cursos.txt", cursos, &totalCursos);

    int opcionPrincipal;

    do {
        printf("\n--- Menú Principal ---\n");
        printf("1. Gestionar Materias\n");
        printf("2. Gestionar Estudiantes\n");
        printf("3. Gestionar Profesores\n");
        printf("4. Gestionar Cursos\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcionPrincipal);

        switch (opcionPrincipal) {
            case 1: {
                int opcionMateria;
                printf("\n--- Gestión de Materias ---\n");
                printf("1. Crear Materia\n");
                printf("2. Editar Materia\n");
                printf("Seleccione una opción: ");
                scanf("%d", &opcionMateria);

                if (opcionMateria == 1) {
                    crearMateria(materias, &totalMaterias);
                } else if (opcionMateria == 2) {
                    editarMateria(materias, totalMaterias);
                } else {
                    printf("Opción inválida.\n");
                }
                break;
            }
            case 2: {
                int opcionEstudiante;
                printf("\n--- Gestión de Estudiantes ---\n");
                printf("1. Crear Estudiante\n");
                printf("2. Editar Estudiante\n");
                printf("Seleccione una opción: ");
                scanf("%d", &opcionEstudiante);

                if (opcionEstudiante == 1) {
                    crearEstudiante(estudiantes, &totalEstudiantes);
                } else if (opcionEstudiante == 2) {
                    editarEstudiante(estudiantes, totalEstudiantes);
                } else {
                    printf("Opción inválida.\n");
                }
                break;
            }
            case 3: {
                int opcionProfesor;
                printf("\n--- Gestión de Profesores ---\n");
                printf("1. Crear Profesor\n");
                printf("2. Editar Profesor\n");
                printf("Seleccione una opción: ");
                scanf("%d", &opcionProfesor);

                if (opcionProfesor == 1) {
                    crearProfesor(profesores, &totalProfesores);
                } else if (opcionProfesor == 2) {
                    editarProfesor(profesores, totalProfesores);
                } else {
                    printf("Opción inválida.\n");
                }
                break;
            }
            case 4: {
                int opcionCurso;
                printf("\n--- Gestión de Cursos ---\n");
                printf("1. Crear Curso\n");
                printf("2. Editar Curso\n");
                printf("Seleccione una opción: ");
                scanf("%d", &opcionCurso);

                if (opcionCurso == 1) {
                    crearCurso(cursos, &totalCursos);
                } else if (opcionCurso == 2) {
                    editarCurso(cursos, totalCursos);
                } else {
                    printf("Opción inválida.\n");
                }
                break;
            }
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcionPrincipal != 5);

    // Guardar datos en los archivos al cerrar
    guardarMateriasEnArchivo("materias.txt", materias, totalMaterias);
    guardarEstudiantesEnArchivo("estudiantes.txt", estudiantes, totalEstudiantes);
    guardarProfesoresEnArchivo("profesores.txt", profesores, totalProfesores);
    guardarCursosEnArchivo("cursos.txt", cursos, totalCursos);

    printf("Datos guardados exitosamente. ¡Hasta luego!\n");
    return 0;
}
