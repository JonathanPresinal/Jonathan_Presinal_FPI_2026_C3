#include <stdio.h>
/* Lluvias.
El programa, al recibir como dato un arreglo tridimensional que contiene
➥información sobre lluvias, genera información estadística. */

#define PRO 24
#define MES 12
#define ANIO 10

/* Prototipos de funciones */
void Lectura(float [][MES][ANIO], int, int, int);
void Funcion1(float [][MES][ANIO], int, int, int);
void Funcion2(float [][MES][ANIO], int, int, int);
void Funcion3(float [][MES][ANIO], int, int, int);

int main(void)
{
float LLU[PRO][MES][ANIO];

Lectura(LLU, PRO, MES, ANIO);
Funcion1(LLU, PRO, MES, ANIO);
Funcion2(LLU, PRO, MES, ANIO);
Funcion3(LLU, 18, MES, 5);

    return 0;
}

/* Lectura de los datos de lluvia */
void Lectura(float A[][MES][ANIO], int F, int C, int P)
{
int K, I, J;
for (K = 0; K < P; K++)
    {
for (I = 0; I < F; I++)
        {
for (J = 0; J < C; J++)
            {
                printf("Anio: %d\tProvincia: %d\tMes: %d: ",
                       K + 1, I + 1, J + 1);

                scanf("%f", &A[I][J][K]);
            }
        }
    }
}

/* Provincia con mayor promedio de precipitacion en los 10 anos */
void Funcion1(float A[][MES][ANIO], int F, int C, int P)
{
int I, K, J, EMAY = -1;
float ELLU = -1.0f, SUM;

for (I = 0; I < F; I++)
    {
        SUM = 0.0f;

        for (K = 0; K < P; K++)
        {
            for (J = 0; J < C; J++)
            {
                SUM += A[I][J][K];
            }
        }

        SUM /= (P * C);

        if (SUM > ELLU)
        {
            ELLU = SUM;
            EMAY = I;
        }
    }

    printf("\n\nProvincia con mayor promedio de lluvias: %d",
           EMAY + 1);
    printf("\nPromedio de precipitacion: %.2f\n", ELLU);
}

/* Provincia con menor promedio de lluvias en el ultimo ano */
void Funcion2(float A[][MES][ANIO], int F, int C, int P)
{
int I, J, EMEN = -1;
float ELLU, SUM;

    ELLU = 0.0f;

    for (I = 0; I < F; I++)
    {
        SUM = 0.0f;

        for (J = 0; J < C; J++)
        {
            SUM += A[I][J][P - 1];
        }

        SUM /= C;

        if (I == 0 || SUM < ELLU)
        {
            ELLU = SUM;
            EMEN = I;
        }
    }

    printf("\nProvincia con menor promedio de lluvias en el ultimo ano: %d",
           EMEN + 1);
    printf("\nPromedio anual: %.2f\n", ELLU);
}

/* Mes con mayor precipitacion en la provincia 18, en el quinto ano */
void Funcion3(float A[][MES][ANIO], int F, int C, int P)
{
int J, EMES = 0;
float ELLU = A[F - 1][0][P - 1];

for (J = 1; J < C; J++)
    {
    if (A[F - 1][J][P - 1] > ELLU)
        {
            ELLU = A[F - 1][J][P - 1];
            EMES = J;
        }
    }

    printf("\nMes con mayor registro de lluvias: %d", EMES + 1);
    printf("\nPrecipitacion: %.2f\n", ELLU);
}
