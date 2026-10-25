#include <stdio.h>

/* Simétrico.
El programa, al recibir como dato un arreglo bidimensional cuadrado, determina
si el mismo es simétrico. */

#define MAX 100

/* Prototipos de funciones */
void Lectura(int [][MAX], int);
int Simetrico(int [][MAX], int);

int main(void)
{
    int MAT[MAX][MAX], N, RES;
    do
    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &N);
    }
    while (N > MAX || N < 1);

Lectura(MAT, N);

    RES = Simetrico(MAT, N);

    if (RES)
        printf("\nEl arreglo bidimensional es simetrico\n");
    else
        printf("\nEl arreglo bidimensional no es simetrico\n");

    return 0;
}

/* Funcion para leer la matriz */
void Lectura(int A[][MAX], int T)
{
    int I, J;
    for (I = 0; I < T; I++)
    {
        for (J = 0; J < T; J++)
        {
          printf("Fila: %d\tColumna: %d\n", I + 1, J + 1);
          scanf("%d", &A[I][J]);
        }
    }
}

/* Funcion para determinar si la matriz es simetrica */
int Simetrico(int A[][MAX], int T)

/* La función Simétricose utiliza para determinar si el arreglo bidimensional
➥cuadrado es simétrico. Si es simétrico regresa 1, en caso contrario, 0.
➥Observa que en el segundo ciclo solamente se recorre la matriz triangular
➥inferior, sin la diagonal principal. */

{
    int I = 0, J, F = 1;
    while ((I < T) && F)
    {
        J = 0;

        while ((J < I) && F)
        {
            if (A[I][J] == A[J][I])
                J++;
            else
                F = 0;
        }

        I++;
    }

    return F;
}
