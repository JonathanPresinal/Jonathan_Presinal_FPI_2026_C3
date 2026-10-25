#include <stdio.h>

/* Asigna.
El programa, al recibir un arreglo bidimensional cuadrado, asigna elementos en
➥función del módulo (residuo) a un arreglo unidimensional. */

#define MAX 10

/* Prototipos de funciones */
void Lectura(int [][MAX], int);
void Calcula(int [][MAX], float [], int);
float Mod0(int [][MAX], int, int);
float Mod1(int [][MAX], int);
float Mod2(int [][MAX], int, int);
void Imprime(float [], int);

int main(void)
{
int MAT[MAX][MAX], TAM;
float VEC[MAX];

do
    {
    printf("Ingrese el tamano de la matriz (1-10): ");

    if (scanf("%d", &TAM) != 1)
        {
            printf("Entrada invalida.\n");
            return 1;
        }

    } while (TAM < 1 || TAM > MAX);

    Lectura(MAT, TAM);
    Calcula(MAT, VEC, TAM);
    Imprime(VEC, TAM);

    return 0;
}

/* Lectura de la matriz */
void Lectura(int A[][MAX], int N)
{
int I, J;
for (I = 0; I < N; I++)
    {
for (J = 0; J < N; J++)
        {
            printf("Ingrese el elemento %d %d: ", I + 1, J + 1);

        if (scanf("%d", &A[I][J]) != 1)
            {
                printf("Entrada invalida.\n");
                return;
            }
        }
    }
}

/* Calcula los elementos del vector segun el residuo */
void Calcula(int A[][MAX], float B[], int N)
{
int I;
for (I = 0; I < N; I++)
    {
        switch (I % 3)
        {
            case 1:
                B[I] = Mod1(A, I);
                break;

            case 2:
                B[I] = Mod2(A, I, N);
                break;

            default:
                B[I] = Mod0(A, I, N);
                break;
        }
    }
}

/* Cociente entre una productoria y una sumatoria */
float Mod0(int A[][MAX], int K, int M)
{
int I;
float PRO = 1.0, SUM = 0.0;

for (I = 0; I < M; I++)
    {
        PRO *= A[I][K];
        SUM += A[I][K];
    }

    if (SUM == 0.0)
    {
        printf("Advertencia: la sumatoria es cero.\n");
        return 0.0;
    }

    return PRO / SUM;
}

/* Sumatoria de una fila hasta la diagonal */
float Mod1(int A[][MAX], int N)
{
int I;
float SUM = 0.0;

    for (I = 0; I <= N; I++)
    {
        SUM += A[N][I];
    }

    return SUM;
}

/* Productoria de una columna desde la diagonal hacia abajo */
float Mod2(int A[][MAX], int N, int M)
{
int I;
float PRO = 1.0;

    for (I = N; I < M; I++)
    {
        PRO *= A[I][N];
    }

    return PRO;
}

/* Imprime el vector */
void Imprime(float B[], int N)
{
    int I;

    printf("\nElementos del vector:\n");

    for (I = 0; I < N; I++)
    {
        printf("Elemento %d: %.2f\n", I + 1, B[I]);
    }
}
