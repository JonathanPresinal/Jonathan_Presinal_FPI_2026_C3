#include <stdio.h>

/* Suma pagos.
El programa recibe un conjunto de pagos
realizados en el ultimo mes y obtiene
la suma total de los mismos.
*/

int main(void)
{
float PAG, SPA;

SPA = 0;

printf("Ingrese el primer pago:\t");
scanf("%f", &PAG);

while (PAG)
    {
SPA = SPA + PAG;

printf("Ingrese el siguiente pago:\t");
scanf("%f", &PAG);
    }

printf("\nEl total de pagos del mes es: %.2f\n", SPA);

    return 0;
}
