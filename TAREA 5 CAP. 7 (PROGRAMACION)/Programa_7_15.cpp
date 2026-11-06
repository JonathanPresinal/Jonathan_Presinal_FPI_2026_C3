#include <stdio.h>
#include <ctype.h>
/* Decodifica.
El programa decodifica una cadena de caracteres compuesta por números y
letras. */
void interpreta(char *);                   /* Prototipo de función. */
int main(void)
{
char cad[50];
printf("\nIngrese la cadena de caracteres: ");
fgets(cad, sizeof(cad), stdin);
interpreta(cad);

return 0;
}
void interpreta(char *cadena)
/* Esta función se utiliza para decodificar la cadena de caracteres. */
{
int i = 0, j, k;
while (cadena[i] != '\0')
{
if (isalpha((unsigned char)cadena[i]))   /* Se utiliza isalpha para observar si el caracter
es una letra. */
{
if (i > 0 && isdigit((unsigned char)cadena[i - 1]))
{
k = cadena[i - 1] - 48;
/* En la variable entera k se almacena el ascii del número —convertido
en caracter— que nos interesa, menos 48 que corresponde al ascii
del dígito 0. */
for (j = 0; j < k; j++)
putchar(cadena[i]);
}
}
i++;
}
}
