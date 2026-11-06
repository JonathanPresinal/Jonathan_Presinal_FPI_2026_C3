#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* Cuenta palabras.
El programa calcula el número de palabras que hay en la cadena de caracteres. */
int cuentap(char *);                     /* Prototipo de función. */
int main(void)
{
int i;
char fra[50];
printf("\nIngrese la linea de texto: ");
fgets(fra, sizeof(fra), stdin);
fra[strcspn(fra, "\n")] = '\0';
if (strlen(fra) < sizeof(fra) - 1)
strcat(fra, " ");              /* Se agrega un espacio en blanco al final de la
cadena. */
i = cuentap(fra);
printf("\nLa línea de texto tiene %d palabras", i);

return 0;
}
int cuentap(char *cad)
{
/* La función cuenta el número de palabras que hay en la cadena de
caracteres. */
char *cad0 = cad;
int i = 0;
cad0 = strstr(cad, " ");       /* Se localiza el primer espacio en blanco en la
cadena. */
while(cad0 != NULL)
{
if (cad0 > cad)
i++;
cad = cad0 + 1;
cad0 = strstr(cad, " ");
/* Se busca un espacio en blanco a partir de la siguiente posición. */
}
if (*cad != '\0')
i++;
return(i);
}
