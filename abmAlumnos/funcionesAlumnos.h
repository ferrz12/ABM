typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;

} eAlumno;

int menuOpciones();

void inicializarArrayIlogicamenteNota(eAlumno[], int);
int buscarLibre(eAlumno[], int, int);

void cargarListadoDeAlumnosSecuencialmente(eAlumno[], int);
void cargarAlumnosEspacioLibre(eAlumno[], int);
void ordenarPorNombre(eAlumno[], int);
void alumnoNombreConP(eAlumno[], int);
void alumnosAprobados(eAlumno[], int);
void alumnosNotaMasAlta(eAlumno [], int);

void mostrarListadoDeAlumnos(eAlumno[], int);
void mostrarAlumno(eAlumno);
eAlumno cargarAlumno();
