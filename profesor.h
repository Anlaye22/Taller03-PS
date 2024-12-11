#ifndef PROFESOR_H
#define PROFESOR_H

typedef struct 
{
    char Nombres[50];
    char Apellidos[50];
    int CC[10];
    char Usuario[30];
    char Clave[30];
    char Estado[10];


}Profesor;

void gestionarProfesor();
int crearProfesor();
void editarProfesor();
bool verificarCCProfesor(int CC);



#endif