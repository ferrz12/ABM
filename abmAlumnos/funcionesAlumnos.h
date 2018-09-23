typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;

} eAlumno;

void cargarListadoDeAlumnos(eAlumno[], int);
void mostrarListadoDeAlumnos(eAlumno[], int);
void ordenarPorNombre(eAlumno[], int);
void alumnoNombreConP(eAlumno[], int);
int menuOpciones();
void inicializarArrayIlogicamente(eAlumno[], int);
void alumnosAprobados(eAlumno[], int);

void mostrarAlumno(eAlumno);
eAlumno cargarAlumno();
