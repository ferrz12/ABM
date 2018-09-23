#include <stdio.h>
#include <stdlib.h>
#include "funcionesAlumnos.h"
#define T 3

int main()
{
    eAlumno listado[T];
    int opcion;

    inicializarArrayIlogicamente(listado, T);

    do{

        opcion = menuOpciones();

        switch(opcion){
            case 1:
                cargarListadoDeAlumnos(listado, T);
                break;
            case 2:
                mostrarListadoDeAlumnos(listado, T);
                break;
            case 3:
                ordenarPorNombre(listado, T);
                break;
            case 4:

                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                opcion = 8;
                break;
            default:
                printf("Ingrese opcion valida");
        }

    }while(opcion != 8);

    return 0;
}
