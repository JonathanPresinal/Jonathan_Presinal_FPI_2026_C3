#include <stdio.h>
/* Busqueda binaria */

const int MAX = 100;

/* Prototipos de funciones */
void Lectura(int A[], int T);
int Binaria(int A[], int T, int E);

int main(void)
{
 int RES, ELE, TAM, VEC[MAX];

 /* Validar el tamano del arreglo */
    do
    {
printf("Ingrese el tamano del arreglo (1-100): ");
scanf("%d", &TAM);
    }
while (TAM > MAX || TAM < 1);

Lectura(VEC, TAM);

printf("\nIngrese el elemento a buscar: ");
scanf("%d", &ELE);

RES = Binaria(VEC, TAM, ELE);
if (RES != 0)
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
printf("Ingrese el elemento %d: ", I + 1);
scanf("%d", &A[I]);
    }
}

/* Funcion de busqueda binaria */
int Binaria(int A[], int T, int E)
{
int IZQ = 0;
int CEN;
int DER = T - 1;

while (IZQ <= DER)
    {
        CEN = (IZQ + DER) / 2;

if (E == A[CEN])
        {
return CEN + 1;
        }
else if (E > A[CEN])
        {
IZQ = CEN + 1;
        }
else
        {
DER = CEN - 1;
        }
    }

    return 0;
}
