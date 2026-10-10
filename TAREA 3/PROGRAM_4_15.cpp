#include <stdio.h>

/* Productoria.
El programa calcula la productoria de los N
primeros numeros naturales.
*/

unsigned long long Productoria(int);

int main(void)
{
int NUM;

do
{
printf("Ingresa el numero del cual quieres calcular la productoria (1-20): ");
scanf("%d", &NUM);

} while (NUM > 20 || NUM < 1);

printf("\nLa productoria de %d es: %llu", NUM, Productoria(NUM));

    return 0;
}

unsigned long long Productoria(int N)
{
int I;
unsigned long long PRO = 1;

for (I = 1; I <= N; I++)
    {
        PRO *= I;
    }

    return PRO;
}
