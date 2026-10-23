#include <stdio.h>
/* Ordenacion por seleccion directa */

const int MAX = 100;

/* Prototipos de funciones */
void Lectura(int A[], int T);
void Ordena(int A[], int T);
void Imprime(int A[], int T);

int main(void)
{
int TAM, VEC[MAX];

   /* Verificar el tamano del arreglo */
do
    {
printf("Ingrese el tamano del arreglo (1-100): ");
scanf("%d", &TAM);
    }
while (TAM > MAX || TAM < 1);

/* Leer los elementos */
Lectura(VEC, TAM);

/* Ordenar el arreglo */
Ordena(VEC, TAM);

/* Imprimir el arreglo ordenado */
printf("\nArreglo ordenado de menor a mayor:\n");
Imprime(VEC, TAM);

    return 0;
}

/* Funcion para leer los elementos */
void Lectura(int A[], int T)
{
int I;
for (I = 0; I < T; I++)
    {
printf("Ingrese el elemento %d: ", I + 1);
scanf("%d", &A[I]);
    }
}

/* Funcion para imprimir el arreglo */
void Imprime(int A[], int T)
{
int I;
for (I = 0; I < T; I++)
    {
printf("\nA[%d]: %d", I, A[I]);
    }

printf("\n");
}

/* Funcion de ordenacion por seleccion directa */
void Ordena(int A[], int T)
{
int I, J, MEN, L;
for (I = 0; I < T - 1; I++)
    {
        MEN = A[I];
        L = I;

for (J = I + 1; J < T; J++)
        {
if (A[J] < MEN)
            {
                MEN = A[J];
                L = J;
            }
        }

        A[L] = A[I];
        A[I] = MEN;
    }
}
