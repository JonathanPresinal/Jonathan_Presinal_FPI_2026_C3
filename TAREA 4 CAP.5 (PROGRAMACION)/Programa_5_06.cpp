#include <stdio.h>
#include <math.h>
/* Suma-cuadrados.
El programa calcula la suma del cuadrado de los elementos de un arreglo
➥unidimensional de 100 elementos de tipo real. */

const int MAX = 100;

/* Prototipos de funciones */
void Lectura(float A[], int T);
double Suma(float A[], int T);

int main(void)
{
float VEC[MAX];
double RES;

/* Lectura del arreglo */
Lectura(VEC, MAX);

/* Calculo de la suma de cuadrados */
RES = Suma(VEC, MAX);

/* Mostrar el resultado */
printf("\n\nSuma del arreglo: %.2lf\n", RES);

return 0;
}

/* Funcion para leer los elementos */
void Lectura(float A[], int T)
{
int I;
for (I = 0; I < T; I++)
    {
printf("Ingrese el elemento %d: ", I + 1);
scanf("%f", &A[I]);
    }
}

/* Funcion para calcular la suma de cuadrados */
double Suma(float A[], int T)
{
int I;
double AUX = 0.0;

for (I = 0; I < T; I++)
  {
 AUX += pow(A[I], 2);
    }

    return AUX;
}
