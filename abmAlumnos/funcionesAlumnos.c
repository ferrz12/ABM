#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionesAlumnos.h"

void mostrarAlumno(eAlumno unAlumno)
{
    printf("%d--%s--%f--%d\n", unAlumno.legajo, unAlumno.nombre, unAlumno.altura, unAlumno.nota);
}

eAlumno cargarAlumno()
{

    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin),
           gets(miAlumno.nombre);

    printf("Ingrese altura: ");
    scanf("%f", &miAlumno.altura);

    printf("Ingrese nota: ");
    scanf("%d", &miAlumno.nota);


    return miAlumno;
}

void cargarListadoDeAlumnos(eAlumno listado[], int tam)
{

    int i;
    for(i = 0; i < tam; i++)
    {
        listado[i] = cargarAlumno();
    }
}
void mostrarListadoDeAlumnos(eAlumno listado[], int tam)
{

    int i;
    for(i = 0; i < tam; i++)
    {
        mostrarAlumno(listado[i]);
    }
}

void ordenarPorNombre(eAlumno listado[], int tam)
{
    int i;
    int j;

    eAlumno auxAlumno;

    for(i = 0; i < tam - 1; i++)
    {
        for(j = i + 1; j < tam; j++){
            if(strcmp(listado[i].nombre, listado[j].nombre) > 0){
                auxAlumno=listado[i];
                listado[i]=listado[j];
                listado[j]=auxAlumno;
            }
        }
    }

     printf("%4s %20s %4s %5s\n", "Legajo", "Nombre", "Nota", "Altura");
     mostrarListadoDeAlumnos(listado, tam);
     system("pause");

}

void alumnoNombreConP(eAlumno listado[], int tam){
    int i;
    for(i = 0; i < tam; i++){
        if(listado[0].nombre == 'p'){
            mostrarListadoDeAlumnos(listado, tam);
        }
    }
}

int menuOpciones(){

    int opcion;

    printf("1-Alta de alumnos \n");
    printf("2-Ver listado de alumnos \n");
    printf("3-Ordenar alfabeticamente \n");
    printf("4-Alumnos aprobados \n");
    printf("5-Alumnos cuyo nombre comienza con P: \n");
    printf("6-Alumnos con nota mas alta \n");
    printf("7-Modificar una nota por legajo: \n");
    printf("8-Salir \n");
    printf("Ingrese opcion: \n");

    scanf("%d", &opcion);

    return opcion;

}

void inicializarArrayIlogicamente(eAlumno listado[], int tam){

    int i;
    for(i = 0; i < tam; i++)
    {
        listado[i].nota = -1;
    }

}

void alumnosAprobados(eAlumno listado[], int tam){

    int i;
    for(i = 0; i < tam; i++){
        if(listado[i].nota > 6){
            mostrarListadoDeAlumnos(listado, tam);
        }
    }

}

