#include <stdio.h>

/* Cuadrado mágico.
El programa genera un cuadrado mágico siguiendo los criterios enunciados
➥anteriormente. */

#define MAX 50

void Cuadrado(int [][MAX], int);
void Imprime(int [][MAX], int);

int main(void)
{
int CMA[MAX][MAX], TAM;

    do
    {
        printf("Ingrese el tamano impar de la matriz (1-49): ");

    if (scanf("%d", &TAM) != 1)
        {
        printf("Entrada invalida.\n");
        return 1;
        }

    } while (TAM < 1 || TAM > MAX || TAM % 2 == 0);

    Cuadrado(CMA, TAM);
    Imprime(CMA, TAM);

    return 0;
}

void Cuadrado(int A[][MAX], int N)
{
int I = 1;
int FIL = 0;
int COL = N / 2;
int NUM = N * N;

while (I <= NUM)
    {
        A[FIL][COL] = I;

    if (I % N != 0)
        {
            FIL = (FIL - 1 + N) % N;
            COL = (COL + 1) % N;
        }
    else if (I < NUM)
        {
            FIL = (FIL + 1) % N;
        }

    I++;
    }
}

void Imprime(int A[][MAX], int N)
{
int I, J;

printf("\nCuadrado magico:\n");

for (I = 0; I < N; I++)
    {
    for (J = 0; J < N; J++)
    {
            printf("%5d", A[I][J]);
        }

        printf("\n");
    }
}
