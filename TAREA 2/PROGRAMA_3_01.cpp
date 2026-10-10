#include <stdio.h>

/* Nómina.
El programa recibe los salarios de 15 profesores
y calcula el total de la nómina universitaria.
*/

int main(void)
{
int I;
float SAL, NOM;

NOM = 0;

for (I = 1; I <= 15; I++)
    {
printf("\nIngrese el salario del profesor %d:\t", I);
scanf("%f", &SAL);

NOM = NOM + SAL;
    }

printf("\n\nEl total de la nomina es: %.2f\n", NOM);

    return 0;
}
