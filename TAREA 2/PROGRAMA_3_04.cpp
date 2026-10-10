#include <stdio.h>
#include <math.h>

/* Suma cuadrados.
El programa recibe un grupo de enteros positivos,
obtiene el cuadrado de cada uno y calcula
la suma total de los cuadrados.
*/

int main(void)
{
int NUM;
long CUA, SUC = 0;

printf("\nIngrese un numero entero -0 para terminar-:\t");
scanf("%d", &NUM);

while (NUM)
    {
CUA = (long)NUM * NUM;

printf("%d al cuadrado es %ld\n", NUM, CUA);

SUC = SUC + CUA;

printf("\nIngrese un numero entero -0 para terminar-:\t");
scanf("%d", &NUM);
    }

printf("\nLa suma de los cuadrados es %ld\n", SUC);

    return 0;
}
