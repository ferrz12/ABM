#include <stdio.h>
#include <stdlib.h>
#include "funcionesAlumnos.h"
#define T 3

int main()
{
    eAlumno listado[T];
    int opcion;
    int cargo;
    int auxInt;
    int i;

    inicializarArrayIlogicamenteNota(listado, T);

    do
    {

        opcion = menuOpciones();

        switch(opcion)
        {
        case 1:


            if(cargarAlumnosEspacioLibre(listado, T)!=-1)
            {
                printf("Carga satisfactoria");
            }
            else
            {
                printf("No hay espacio!");
            }
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
            cargo = 0;
            printf("Ingrese un legajo: ");
            scanf("%d", &auxInt);

            for(i=0; i<T; i++)
            {

                if(listado[i].estado!=VACIO &&
                        auxInt == listado[i].legajo)
                {
                    printf("Ingrese la nueva nota: ");
                    scanf("%d", &listado[i].nota);
                    cargo = 1;
                }

            }

            if(cargo==0)
            {
                printf("Legajo inexistente");
            }


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
