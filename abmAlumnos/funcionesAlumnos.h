#define VACIO -1
#define OCUPADO 1
#define BORRADO 0

typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
    int estado;

} eAlumno;

int menuOpciones();

void inicializarArrayIlogicamenteNota(eAlumno[], int);
int buscarLibre(eAlumno[], int, int);

void cargarListadoDeAlumnosSecuencialmente(eAlumno[], int);
int cargarAlumnosPorEspacioLibre(eAlumno[], int);
void ordenarPorNombre(eAlumno[], int);
void alumnoNombreConP(eAlumno[], int);
void alumnosAprobados(eAlumno[], int);
void alumnosNotaMasAlta(eAlumno [], int);

void mostrarListadoDeAlumnos(eAlumno[], int);
void mostrarAlumno(eAlumno);
eAlumno cargarAlumno();
