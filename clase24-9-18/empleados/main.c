#include <stdio.h>
#include <stdlib.h>

//estructura anidada
typedef struct
{
    int day;
    int month;
    int year;

}sFecha;

typedef struct
{
    int id;
    char nombre[50];
    sFecha nacimiento;
    sFecha ingreso;


}sEmpleado;

int main()
{
    sEmpleado miEmpleado;

    miEmpleado.id = 25;
    miEmpleado.nacimiento.day = 01;
    return 0;
}
