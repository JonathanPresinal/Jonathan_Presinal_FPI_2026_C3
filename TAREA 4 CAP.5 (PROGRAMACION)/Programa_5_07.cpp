#include <stdio.h>
/* Arreglo sin elementos repetidos.
El programa, al recibir como dato un arreglo unidimensional desordenado de N
➥elementos, obtiene como salida ese mismo arreglo pero sin los elementos
➥repetidos. */

/* Prototipos de funciones */
void Lectura(int A[], int T);
void Imprime(int A[], int T);
void Elimina(int A[], int *T);

int main(void)
{
 int TAM, ARRE[100];
/* Validar el tamaño del arreglo */
do
    {
printf("Ingrese el tamano del arreglo (1-100): ");
scanf("%d", &TAM);
    }
while (TAM > 100 || TAM < 1);

/* Leer los elementos */
Lectura(ARRE, TAM);

/* Eliminar los elementos repetidos */
Elimina(ARRE, &TAM);

/* Imprimir el arreglo resultante */
printf("\nArreglo sin elementos repetidos:\n");
Imprime(ARRE, TAM);

    return 0;
}

/* Funcion para leer el arreglo */
void Lectura(int A[], int T)
{
int I;
printf("\n");

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

/* Funcion para eliminar los elementos repetidos */
void Elimina(int A[], int *T)
{
int I = 0, K, L;

while (I < (*T - 1))
    {
  K = I + 1;

  while (K < *T)
        {
  if (A[I] == A[K])
            {
  for (L = K; L < (*T - 1); L++)
                {
    A[L] = A[L + 1];
                }

    *T = *T - 1;
            }
            else
            {
     K++;
            }
        }

        I++;
    }
}
