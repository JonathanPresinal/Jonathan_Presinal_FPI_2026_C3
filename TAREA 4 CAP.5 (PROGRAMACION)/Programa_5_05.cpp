#include <stdio.h>
/* Frecuencia de calificaciones */
const int TAM = 50;

/* Prototipos de funciones */
void Lectura(int *, int);
void Frecuencia(int [], int, int [], int);
void Impresion(int *, int);
void Mayor(int *, int);

int main(void)
{
  int CAL[TAM], FRE[6] = {0};

 /* Lectura de las calificaciones */
 Lectura(CAL, TAM);

 /* Calculo de las frecuencias */
    Frecuencia(CAL, TAM, FRE, 6);

 /* Impresion de los resultados */
 printf("\nFrecuencia de calificaciones\n");
 Impresion(FRE, 6);

  /* Busqueda de la frecuencia mas alta */
  Mayor(FRE, 6);

    return 0;
}

/* Funcion para leer las calificaciones */
void Lectura(int VEC[], int T)
{
  int I;
  for (I = 0; I < T; I++)

  {
   printf("Ingrese la calificacion (0-5) del alumno %d: ", I + 1);
   scanf("%d", &VEC[I]);
    }
}

/* Funcion para imprimir las frecuencias */
void Impresion(int VEC[], int T)
{
   int I;
   for (I = 0; I < T; I++)

    {
        printf("\nCalificacion %d: %d", I, VEC[I]);
    }
}

/* Funcion para calcular las frecuencias */
void Frecuencia(int A[], int P, int B[], int T)
{
   int I;
   for (I = 0; I < P; I++)
    {
        if ((A[I] >= 0) && (A[I] < T))
        {
            B[A[I]]++;
        }
    }
}

/* Funcion para encontrar la frecuencia mas alta */
void Mayor(int *X, int T)
{
    int I, MFRE = 0, MVAL = X[0];

    for (I = 1; I < T; I++)
    {
        if (MVAL < X[I])
        {
            MFRE = I;
            MVAL = X[I];
        }
    }

    printf("\n\nMayor frecuencia de calificaciones: %d"
           "\tFrecuencia: %d\n", MFRE, MVAL);
}
