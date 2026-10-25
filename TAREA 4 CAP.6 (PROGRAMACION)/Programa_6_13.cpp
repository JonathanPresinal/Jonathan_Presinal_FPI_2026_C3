#include <stdio.h>

/* Empresa textil.
El programa, al recibir un arreglo tridimensional que contiene información
➥sobre las ventas mensuales de tres departamentos en los últimos ocho años,
➥genera información estadística valiosa para la empresa. */

#define MES 12
#define DEP 3
#define ANIO 8

/* Prototipos de funciones */
void Lectura(float [][DEP][ANIO], int, int, int);
void Funcion1(float [][DEP][ANIO], int, int, int);
void Funcion2(float [][DEP][ANIO], int, int, int);
void Funcion3(float [][DEP][ANIO], int, int, int);

int main(void)
{
float PRO[MES][DEP][ANIO];

Lectura(PRO, MES, DEP, ANIO);
Funcion1(PRO, MES, DEP, 2);
Funcion2(PRO, MES, DEP, ANIO);
Funcion3(PRO, MES, DEP, ANIO);

    return 0;
}

/* Lectura de las ventas */
void Lectura(float A[][DEP][ANIO], int F, int C, int P)
{
int K, I, J;
for (K = 0; K < P; K++)
    {
for (I = 0; I < F; I++)
        {
for (J = 0; J < C; J++)
            {
printf("Anio: %d\tMes: %d\tDepartamento: %d: ",
                       K + 1, I + 1, J + 1);

if (scanf("%f", &A[I][J][K]) != 1)
                {
printf("Entrada invalida.\n");
                return;
                }
            }
        }
    }
}

/* Ventas totales de la empresa en el segundo anio */
void Funcion1(float A[][DEP][ANIO], int F, int C, int P)
{
int I, J;
float SUM = 0.0f;
for (I = 0; I < F; I++)
    {
    for (J = 0; J < C; J++)
        {
            SUM += A[I][J][P - 1];
        }
    }

printf("\nVentas totales de la empresa en el segundo anio: %.2f\n",
           SUM);
}

/* Departamento con mayores ventas en el ultimo anio */
void Funcion2(float A[][DEP][ANIO], int F, int C, int P)
{
int I, J, MAY = 0;
float SUM[DEP] = {0.0f, 0.0f, 0.0f};
for (I = 0; I < F; I++)
    {
    for (J = 0; J < C; J++)
        {
            SUM[J] += A[I][J][P - 1];
        }
    }

    for (J = 1; J < C; J++)
    {
        if (SUM[J] > SUM[MAY])
        {
            MAY = J;
        }
    }

    printf("\nDepartamento con mayores ventas en el ultimo anio: ");
    switch (MAY)
    {
        case 0:
            printf("Hilos");
            break;
        case 1:
            printf("Lanas");
            break;
        case 2:
            printf("Licra");
            break;
    }

    printf("\nVentas: %.2f\n", SUM[MAY]);
}

/* Departamento, mes y anio con la mayor venta */
void Funcion3(float A[][DEP][ANIO], int F, int C, int P)
{
    int K, I, J;
    int DE = 0, ME = 0, AN = 0;
    float VEN = A[0][0][0];
    for (K = 0; K < P; K++)
    {
    for (I = 0; I < F; I++)
        {
    for (J = 0; J < C; J++)
            {
        if (A[I][J][K] > VEN)
                {
                    VEN = A[I][J][K];
                    DE = J;
                    ME = I;
                    AN = K;
                }
            }
        }
    }

    printf("\nMayor venta registrada:\n");

    switch (DE)
    {
        case 0:
            printf("Departamento: Hilos\n");
            break;
        case 1:
            printf("Departamento: Lanas\n");
            break;
        case 2:
            printf("Departamento: Licra\n");
            break;
    }

    printf("Mes: %d\n", ME + 1);
    printf("Anio: %d\n", AN + 1);
    printf("Ventas: %.2f\n", VEN);
}
