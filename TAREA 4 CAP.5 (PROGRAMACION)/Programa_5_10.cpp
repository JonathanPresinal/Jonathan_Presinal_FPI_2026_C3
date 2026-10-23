#include <stdio.h>
/* Busqueda secuencial en arreglos ordenados en forma creciente */
const int MAX = 100;

/* Prototipos de funciones */
void Lectura(int A[], int T);
int Busca(int A[], int T, int E);

int main(void)
{
  int RES, ELE, TAM, VEC[MAX];

  /* Validar el tamano del arreglo */
    do
    {
    printf("Ingrese el tamano del arreglo (1-100): ")
    scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);

    /* Leer los elementos */
    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    /* Buscar el elemento */
    RES = Busca(VEC, TAM, ELE);

    if (RES)
    {
        printf("\nEl elemento se encuentra en la posicion: %d\n", RES);
    }
    else
    {
        printf("\nEl elemento no se encuentra en el arreglo.\n");
    }

    return 0;
}

/* Funcion para leer el arreglo */
void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
    printf("Ingrese el elemento %d: ", I + 1)
    scanf("%d", &A[I]);
    }
}

/* Funcion de busqueda secuencial ordenada */
int Busca(int A[], int T, int E)
{
    int I = 0;
    while (I < T && E >= A[I])
    {
    if (A[I] == E)
        {
    return I + 1;
        }

      I++;
    }

    return 0;
}
