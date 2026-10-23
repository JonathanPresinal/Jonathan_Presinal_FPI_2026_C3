#include <stdio.h>
/* Apuntadores, variables y valores */

int main(void)
{
 int X = 3, Y = 7;
 int Z[5] = {2, 4, 6, 8, 10};
 int *IX;

 printf("\nX = %d\tY = %d\tZ[0] = %d\tZ[1] = %d"
           "\tZ[2] = %d\tZ[3] = %d\tZ[4] = %d\n",
           X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

  IX = &X;       /* IX apunta a X */
  Y = *IX;       /* Y recibe el valor de X */
 *IX = 1;       /* X cambia a 1 */

 printf("\nX = %d\tY = %d\n", X, Y);

  IX = &Z[2];    /* IX apunta al tercer elemento */
  Y = *IX;       /* Y recibe Z[2] */
 *IX = 15;      /* Z[2] cambia a 15 */

  printf("\nX = %d\tY = %d\tZ[2] = %d\n", X, Y, Z[2]);

  X = *IX + 5;   /* X = 15 + 5 = 20 */
 *IX = *IX - 5; /* Z[2] = 15 - 5 = 10 */

  printf("\nX = %d\tY = %d\tZ[2] = %d\n", X, Y, Z[2]);

  ++*IX;         /* Z[2] aumenta a 11 */
  *IX += 1;      /* Z[2] aumenta a 12 */

  printf("\nX = %d\tY = %d\tZ[2] = %d\n", X, Y, Z[2]);

  X = *(IX + 1); /* X recibe Z[3], cuyo valor es 8 */
  Y = *IX;       /* Y recibe Z[2], cuyo valor es 12 */

  printf("\nX = %d\tY = %d\n", X, Y);

  IX = IX + 1;   /* IX ahora apunta a Z[3] */
  Y = *IX;       /* Y recibe 8 */

  printf("\nX = %d\tY = %d\n", X, Y);

  /* No se realizan accesos fuera del arreglo. */

  return 0;
}
