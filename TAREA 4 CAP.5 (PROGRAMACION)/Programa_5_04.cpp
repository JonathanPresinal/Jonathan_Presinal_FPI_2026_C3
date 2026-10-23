#include <stdio.h>
/* Producto de vectores */

const int MAX = 10;

/* Prototipos de funciones */
void Lectura(int VEC[], int T);
void Imprime(int VEC[], int T);
void Producto(int *X, int *Y, int *Z, int T);

int main(void)
{
  int VE1[MAX], VE2[MAX], VE3[MAX];

  /* Lectura de los dos vectores */
printf("Ingrese los elementos del primer vector:\n");
Lectura(VE1, MAX);

printf("\nIngrese los elementos del segundo vector:\n");
Lectura(VE2, MAX);

  /* Producto de los vectores */
Producto(VE1, VE2, VE3, MAX);

  /* Impresion del resultado */
printf("\n\nProducto de los vectores:\n");
Imprime(VE3, MAX);

    return 0;
}

/* Funcion para leer un vector */
void Lectura(int VEC[], int T)
{
    int I;

    for (I = 0; I < T; I++)
    {
printf("Ingrese el elemento %d: ", I + 1);
scanf("%d", &VEC[I]);
    }
}

/* Funcion para imprimir un vector */
void Imprime(int VEC[], int T)
{
int I;

for (I = 0; I < T; I++)
    {
printf("\nVEC[%d]: %d", I + 1, VEC[I]);
    }

printf("\n");
}

/* Funcion para multiplicar los vectores */
void Producto(int *X, int *Y, int *Z, int T)
{
    int I;

    for (I = 0; I < T; I++)
    {
        Z[I] = X[I] * Y[I];
    }
}
