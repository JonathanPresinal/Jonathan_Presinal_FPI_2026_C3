#include <stdio.h>

/* Mayor divisor.
El programa, al recibir como dato un numero entero
positivo, calcula su mayor divisor.
*/

int mad(int);

int main(void)
{
int NUM, RES;

printf("\nIngresa el numero: ");
    scanf("%d", &NUM);

if (NUM <= 1)
    {
printf("\nDebes ingresar un numero mayor que 1");
        return 1;
    }

RES = mad(NUM);

printf("\nEl mayor divisor de %d es: %d", NUM, RES);

    return 0;
}

int mad(int N1)
{
int I = (N1 / 2);

while (N1 % I)
        I--;

    return I;
}
