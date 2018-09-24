#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionesExtra.h"

int menuOpciones()
{

    int opcion;

    printf("1-Alta de alumnos \n");
    printf("2-Ver listado de alumnos \n");
    printf("3-Ordenar alfabeticamente \n");
    printf("4-Alumnos aprobados \n");
    printf("5-Alumnos cuyo nombre comienza con P \n");
    printf("6-Alumno/s con nota mas alta \n");
    printf("7-Modificar una nota por legajo: \n");
    printf("8-Salir \n");
    printf("Ingrese opcion: \n");

    scanf("%d", &opcion);

    system("cls");

    return opcion;

}

