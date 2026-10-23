#include <stdio.h>
/* Ordenacion por insercion directa */

const int MAX = 100;

/* Prototipos de funciones */
void Lectura(int A[], int T);
void Ordena(int A[], int T);
void Imprime(int A[], int T);

int main(void)
{
int TAM, VEC[MAX];

 /* Validar el tamano del arreglo */
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

/* Mostrar el arreglo ordenado */
printf("\nArreglo ordenado de menor a mayor:\n");
Imprime(VEC, TAM);

    return 0;
}

/* Funcion para leer el arreglo */
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

/* Funcion de ordenacion por insercion directa */
void Ordena(int A[], int T)
{
int AUX, L, I;
for (I = 1; I < T; I++)
    {
    AUX = A[I];
        L = I - 1;

while ((L >= 0) && (AUX < A[L]))
        {
            A[L + 1] = A[L];
            L--;
        }

        A[L + 1] = AUX;
    }
}
