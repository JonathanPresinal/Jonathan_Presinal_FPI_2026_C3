#include <stdio.h>
/* Primos.
El programa almacena en un arreglo unidimensional los primeros 100 números
➥primos. */

const int TAM = 100;

/* Prototipos de funciones */
void Imprime(int Primos[], int T);
void Primo(int A, int *B);

int main(void)
{
 int P[TAM];
 int J = 0;
 int PRI = 2;
 int FLA;

 while (J < TAM)
    {
    FLA = 1;
    Primo(PRI, &FLA);

    if (FLA)
        {
P[J] = PRI;
J++;
        }

if (PRI == 2)
PRI = 3;
else
PRI += 2;
    }

Imprime(P, TAM);

return 0;
}

/* Determina si un numero es primo */
void Primo(int A, int *B)
{
 int DI = 2;
  if (A < 2)
    {
*B = 0;
return;
    }

while (DI * DI <= A && *B)
    {
    if (A % DI == 0)
    *B = 0;

        DI++;
    }
}

/* Imprime el arreglo de numeros primos */
void Imprime(int Primos[], int T)
{
int I;
for (I = 0; I < T; I++)
  {
printf("\nPrimos[%d]: %d", I, Primos[I]);
    }

printf("\n");
}
