#include <stdio.h>
#include <string.h>
/* Cuenta cadenas.
El programa, al recibir dos cadenas de caracteres, calcula e imprime cuántas
veces se encuentra la segunda cadena en la primera. */
int main(void)
{
char cad1[50], cad2[50], cad3[50], *cad0 = cad3;
int i = 0;
printf("\n Ingrese la primera cadena de caracteres: ");
fgets(cad1, sizeof(cad1), stdin);
cad1[strcspn(cad1, "\n")] = '\0';
printf("\n Ingrese la cadena a buscar: ");
fgets(cad2, sizeof(cad2), stdin);
cad2[strcspn(cad2, "\n")] = '\0';
strcpy(cad0, cad1);             /* Se copia la cadena original a cad0. */
if (cad2[0] != '\0')
cad0 = strstr(cad0, cad2);
else
cad0 = NULL;
/* En cad0 se asigna el apuntador a la primera ocurrencia de la cadena cad2.
Si no existe se almacena NULL. */
while(cad0 != NULL)
{
i++;
cad0 = strstr(cad0 + 1, cad2);
/* Se modifica nuevamente la cadena, moviendo el apuntador una
posición. */
}
printf("\nEl número de veces que aparece la segunda cadena es: %d", i);

return 0;
}
