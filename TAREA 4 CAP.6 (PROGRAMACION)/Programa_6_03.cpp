#include <stdio.h>

/* Universidad.
El programa, al recibir información sobre el número de alumnos que han ingresado
➥a sus ocho diferentes carreras en los dos semestres lectivos de los últimos
➥cinco años, obtiene información útil para el departamento de escolar. */
const int F = 8, C = 2, P = 5;
/* Se declaran constantes para la fila, la columna y la profundidad. */

#define F 8
#define C 2
#define P 5

/* Prototipos de funciones */
void Lectura(int [][C][P], int, int, int);
void Funcion1(int [][C][P], int, int, int);
void Funcion2(int [][C][P], int, int, int);
void Funcion3(int [][C][P], int, int, int);

int main(void)
{
int UNI[F][C][P];

    Lectura(UNI, F, C, P);
    Funcion1(UNI, F, C, P);
    Funcion2(UNI, F, C, P);

    /* Carrera 6: Ingenieria en Computacion */
    Funcion3(UNI, 6, C, P);

    return 0;
}

/* Lectura de los datos */
void Lectura(int A[][C][P], int FI, int CO, int PR)
{
int K, I, J;
for (K = 0; K < PR; K++)
    {
    for (I = 0; I < FI; I++)
        {
    for (J = 0; J < CO; J++)
            {
        printf("Ano: %d\tCarrera: %d\tSemestre: %d\n",
                       K + 1, I + 1, J + 1);
        scanf("%d", &A[I][J][K]);
            }
        }
    }
}

/* Funcion 1: ano con mayor ingreso total */
void Funcion1(int A[][C][P], int FI, int CO, int PR)
{
int K, I, J, MAY = -1, AO = -1, SUM;
for (K = 0; K < PR; K++)
    {
        SUM = 0;

    for (I = 0; I < FI; I++)
        {
    for (J = 0; J < CO; J++)
        {
                SUM += A[I][J][K];
            }
        }

        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }

    printf("\nAno con mayor ingreso de alumnos: %d"
           "\nAlumnos: %d\n", AO + 1, MAY);
}

/* Funcion 2: carrera con mayor ingreso en el ultimo ano */
void Funcion2(int A[][C][P], int FI, int CO, int PR)
{
    int I, J, MAY = -1, CAR = -1, SUM;
    for (I = 0; I < FI; I++)
    {
        SUM = 0;

        for (J = 0; J < CO; J++)
        {
            SUM += A[I][J][PR - 1];
        }

        if (SUM > MAY)
        {
            MAY = SUM;
            CAR = I;
        }
    }

    printf("\nCarrera con mayor numero de alumnos: %d"
           "\nAlumnos: %d\n", CAR + 1, MAY);
}

/* Funcion 3: ano con mayor ingreso en Ingenieria en Computacion */
void Funcion3(int A[][C][P], int FI, int CO, int PR)
{
    int K, J, MAY = -1, AO = -1, SUM;
    for (K = 0; K < PR; K++)
    {
        SUM = 0;

        for (J = 0; J < CO; J++)
        {
            SUM += A[FI - 1][J][K];
        }

        if (SUM > MAY)
        {
            MAY = SUM;
            AO = K;
        }
    }

printf("\nAno con mayor ingreso en la carrera %d: %d"
           "\nAlumnos: %d\n", FI, AO + 1, MAY);
}
