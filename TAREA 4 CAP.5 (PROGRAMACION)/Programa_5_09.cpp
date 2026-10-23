#include <stdio.h>
/* Búsqueda secuencial en arreglos desordenados. */
const int MAX = 100;

/* Prototipos de funciones */
void Lectura(int A[], int T);
int Busca(int A[], int T, int K);

int main(void)
{
 int RES, ELE, TAM, VEC[MAX];

 /* Verificar el tamaño del arreglo */
 do
    {

  printf("Ingrese el tamano del arreglo (1-100): ");
  scanf("%d", &TAM);
    }
  while (TAM > MAX || TAM < 1);

 /* Leer los elementos */
    Lectura(VEC, TAM);

 /* Solicitar el elemento que se desea buscar */
 printf("\nIngrese el elemento a buscar: ");
 scanf("%d", &ELE);

 /* Realizar la busqueda */
 RES = Busca(VEC, TAM, ELE);

 if (RES)
    {
    printf("\nEl elemento se encuentra en la posicion %d\n", RES);
    }
    else
    {
        printf("\nEl elemento no se encuentra en el arreglo\n");
    }

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

/* Funcion de busqueda secuencial */
int Busca(int A[], int T, int K)
{
    int I = 0;

    while (I < T)
    {
        if (A[I] == K)
        {
            return I + 1;
        }

        I++;
    }

    return 0;
}
