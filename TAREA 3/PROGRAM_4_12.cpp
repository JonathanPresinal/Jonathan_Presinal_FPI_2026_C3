# include <stdio.h>
/* Máximo común divisor.
El programa, al recibir como datos dos números enteros, calcula el máximo
➥ común divisor de dichos números. */

int mcd(int, int);

int main(void)
{
int NU1, NU2, RES;
printf("\nIngresa los dos numeros enteros: ");
    scanf("%d %d", &NU1, &NU2);

if (NU1 == 0 && NU2 == 0)
    {
printf("\nEl MCD de 0 y 0 no esta definido.");
        return 1;
    }

RES = mcd(NU1, NU2);

printf("\nEl maximo comun divisor de %d y %d es: %d",
           NU1, NU2, RES);

    return 0;
}

int mcd(int N1, int N2)
{
int R;

while (N2 != 0)
    {
R = N1 % N2;
N1= N2;
N2 = R;
    }

return (N1 < 0) ? -N1 : N1;
}
