#include <stdio.h>
#include <stdlib.h>
#include "funcionesAlumnos.h"
#include "funcionesExtra.h"
#define T 10

void inicializarAlumnos(eAlumno [], int);

int main()
{
    eAlumno listado[T];
    int opcion;

    inicializarEstadoArrayIlogicamente(listado, T);

    do
    {

        opcion = menuOpciones();

        switch(opcion)
        {
        case 1:

            /*
            if(cargarAlumnosPorEspacioLibre(listado, T)!=-1)
            {
                printf("Carga satisfactoria");
            }
            else
            {
                printf("No hay espacio!");
            }
            */
            inicializarAlumnos(listado, T);
            break;
        case 2:
            mostrarListadoDeAlumnos(listado, T);
            break;
        case 3:
            ordenarPorNombre(listado, T);
            break;
        case 4:
            alumnosAprobados(listado, T);
            break;
        case 5:
            alumnoNombreConP(listado, T);
            break;
        case 6:
            alumnosNotaMasAlta(listado, T);
            break;
        case 7:



            /*
                            1-pedir legajo
            2-busco ese legajo en los alumnos
                si lo encuentra, pide una nueva nota
                no lo encuentra, notifico al usuario



            */




            break;
        case 8:
            opcion = 8;
            break;
        default:
            printf("Ingrese opcion valida");
        }

    }
    while(opcion != 8);

    return 0;
}


void inicializarAlumnos(eAlumno listado[], int tam){

    //inicializa solo 3

    int legajo[3] = {5, 9, 7};
    char nombre[3][50] = {"Juan", "Maria", "Luis"};
    float altura[3] = {1.65, 1.70, 1.80};
    int nota[3] = {5, 8, 9};

    int i;
    for(i = 0; i < 3; i++)
    {
        listado[i].legajo = legajo[i];
        listado[i].altura = altura[i];
        listado[i].nota = nota[i];
        strcpy(listado[i].nombre, nombre[i]);
        listado[i].estado = OCUPADO;
    }

}

