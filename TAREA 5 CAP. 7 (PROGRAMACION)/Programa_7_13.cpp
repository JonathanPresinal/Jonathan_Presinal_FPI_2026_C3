#include <stdio.h>
/* Calcula longitud.
El programa calcula la longitud de la cadena sin utilizar la función strlen. */
int cuenta(char *);             /* Prototipo de función. */
int main(void)
{
int i;
char cad[50];
printf("\nIngrese la cadena de caracteres: ");
fgets(cad, sizeof(cad), stdin);
i = cuenta(cad);
printf("\nLongitud de la cadena: %d", i);

return 0;
}
int cuenta(char *cadena)
/* La función calcula la longitud de la cadena. */
{
int c = 0;
while(cadena[c] != '\0' && cadena[c] != '\n')
c++;
return (c);
}
