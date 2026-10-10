#include <stdio.h>

/* Llamadas a funciones */

void trueque(int *x, int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x)
{
    return (x + x);
}

int main(void)
{
    int x = 5, y = 10, z = 0;

    /* Llamada 3 */
    suma(10);

    /* Llamada 4 */
    y = suma(10);
    printf("\nResultado de suma: %d", y);

    /* Llamada 6 */
    trueque(&x, &y);
    printf("\nDespues del trueque: x = %d, y = %d", x, y);

    return 0;
}
