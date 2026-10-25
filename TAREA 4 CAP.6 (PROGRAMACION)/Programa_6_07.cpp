#include <stdio.h>

/* Fábrica de lácteos.
El programa, al recibir como datos las ventas mensuales de diferentes
➥productos, obtiene información estadística valiosa para la empresa. */

#define PRO 15
#define MES 12

/* Prototipos de funciones */
void Lectura1(int [PRO][MES]);
void Lectura2(float [], int);
void Funcion1(int [][MES], int, int, float [], float []);
void Funcion2(float [], int);
void Funcion3(float [], int);

int main(void)
{
int FAB[PRO][MES] = {0};
float COS[PRO], VEN[PRO];

Lectura1(FAB);
Lectura2(COS, PRO);
Funcion1(FAB, PRO, MES, COS, VEN);
Funcion2(VEN, PRO);
Funcion3(VEN, PRO);

    return 0;
}

/* Lectura de las cantidades vendidas */
void Lectura1(int A[][MES])
{
int M, P, CAN;

printf("Ingrese mes, tipo de producto y cantidad vendida (-1 para terminar): ");
scanf("%d %d %d", &M, &P, &CAN);

while (M != -1 && P != -1 && CAN != -1)
    {
if (M >= 1 && M <= MES &&
            P >= 1 && P <= PRO &&
            CAN >= 0)
        {
          A[P - 1][M - 1] += CAN;
        }
        else
        {
          printf("Datos invalidos. Intente nuevamente.\n");
        }

        printf("Ingrese mes, tipo de producto y cantidad vendida (-1 para terminar): ");
        scanf("%d %d %d", &M, &P, &CAN);
    }
}

/* Lectura de los precios de los productos */
void Lectura2(float A[], int N)
{
    int I;
    for (I = 0; I < N; I++)
    {
       printf("Ingrese costo del producto %d: ", I + 1);
       scanf("%f", &A[I]);
    }
}

/* Calculo de las ventas anuales por producto */
void Funcion1(int A[][MES], int F, int C,
              float V1[], float V2[])
{
    int I, J, SUM;
    printf("\n");
    for (I = 0; I < F; I++)
    {
        SUM = 0;

    for (J = 0; J < C; J++)
        {
            SUM += A[I][J];
        }

        V2[I] = V1[I] * SUM;

       printf("Total de ventas del producto %d: %8.2f\n",
               I + 1, V2[I]);
    }
}

/* Calculo de las ventas totales de la fabrica */
void Funcion2(float A[], int N)
{
    int I;
    float SUM = 0.0;
    for (I = 0; I < N; I++)
    {
        SUM += A[I];
    }

    printf("\nTotal de ventas de la fabrica: %.2f\n", SUM);
}

/* Producto con mayor monto de ventas */
void Funcion3(float A[], int N)
{
    int I, TPR = 0;
    float MAY = A[0];
    for (I = 1; I < N; I++)
    {
        if (MAY < A[I])
        {
            TPR = I;
            MAY = A[I];
        }
    }

    printf("\nTipo de producto con mayores ventas: %d"
           "\nMonto de ventas: %.2f\n", TPR + 1, MAY);
}
