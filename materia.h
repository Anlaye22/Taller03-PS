#ifndef CURSO_H
#define CURSO_H

typedef struct
{
    char Nombre[30];
    int Codigo[10];
    char Estado[10];

} Materia;

void gestionarMateria();
int crearMateria();
void editarMateria();
int verificarCodigoMateria(const char *Codigo);

#endif