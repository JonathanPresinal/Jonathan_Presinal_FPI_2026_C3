#include <stdio.h>

/* Casa de bolsa.
El programa, al recibir como datos los precios mensuales de las acciones de sus
➥cinco fondos de inversión, además del precio de las acciones al 31 de diciembre
➥del 2003, genera información estadística importante para la empresa. */

#define FONDOS 5
#define MESES 12

/* Prototipos de funciones */
void LecturaM(float [][MESES], int, int);
void LecturaV(float [], int);
void F1(float [][MESES], int, int, float [], float []);
void F2(float [][MESES], int, int);
void F3(float [], int);

int main(void)
{
    float FON[FONDOS][MESES], PRE[FONDOS], REN[FONDOS];

    LecturaM(FON, FONDOS, MESES);
    LecturaV(PRE, FONDOS);

    F1(FON, FONDOS, MESES, PRE, REN);
    F2(FON, FONDOS, MESES);
    F3(REN, FONDOS);

    return 0;
}

/* Lectura de los precios mensuales */
void LecturaM(float A[][MESES], int F, int C)
{
    int I, J;
    for (I = 0; I < F; I++)
    {
    for (J = 0; J < C; J++)
        {
            printf("Precio fondo %d, mes %d: ", I + 1, J + 1);

            if (scanf("%f", &A[I][J]) != 1)
            {
                printf("Entrada invalida.\n");
                return;
            }
        }
    }
}

/* Lectura de los precios al 31 de diciembre de 2003 */
void LecturaV(float A[], int T)
{
    int I;
    printf("\n");
    for (I = 0; I < T; I++)
    {
        printf("Precio fondo %d al 31/12/2003: ", I + 1);

        if (scanf("%f", &A[I]) != 1)
        {
            printf("Entrada invalida.\n");
            return;
        }
    }
}

/* Calculo del rendimiento anual */
void F1(float A[][MESES], int F, int C, float B[], float V[])
{
    int I;
    printf("\nRENDIMIENTOS ANUALES DE LOS FONDOS\n");

    for (I = 0; I < F; I++)
    {
        if (B[I] != 0.0f)
        {
            V[I] = ((A[I][C - 1] - B[I]) / B[I]) * 100.0f;

            printf("Fondo %d: %.2f%%\n", I + 1, V[I]);
        }
        else
        {
            V[I] = 0.0f;
            printf("Fondo %d: no se puede calcular (precio inicial cero).\n",
                   I + 1);
        }
    }
}

/* Calculo del promedio anual de los precios */
void F2(float A[][MESES], int F, int C)
{
    int I, J;
    float SUM, PRO;

    printf("\nPROMEDIO ANUAL DE LOS PRECIOS DE LOS FONDOS\n");

    for (I = 0; I < F; I++)
    {
        SUM = 0.0f;

        for (J = 0; J < C; J++)
        {
            SUM += A[I][J];
        }

        PRO = SUM / C;

        printf("Fondo %d: %.2f\n", I + 1, PRO);
    }
}

/* Determinacion del mejor y peor rendimiento */
void F3(float A[], int F)
{
    float ME = A[0], PE = A[0];
    int M = 0, P = 0, I;

    for (I = 1; I < F; I++)
    {
        if (A[I] > ME)
        {
            ME = A[I];
            M = I;
        }

        if (A[I] < PE)
        {
            PE = A[I];
            P = I;
        }
    }

    printf("\nMEJOR Y PEOR FONDO DE INVERSION\n");
    printf("Mejor fondo: %d\tRendimiento: %.2f%%\n", M + 1, ME);
    printf("Peor fondo: %d\tRendimiento: %.2f%%\n", P + 1, PE);
}
