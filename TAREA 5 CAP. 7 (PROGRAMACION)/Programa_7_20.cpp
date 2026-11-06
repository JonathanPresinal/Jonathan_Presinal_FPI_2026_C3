#include <stdio.h>
#include <string.h>
int longitud(char *cad);         /* Prototipo de función. */
int main(void)
{
int i, n, l = -1, p, t;
char cad[50], FRA[20][50];
printf("\nIngrese el numero de filas del arreglo: ");
scanf("%d", &n);
getchar();
if (n < 1 || n > 20)
return 1;
for(i=0; i<n; i++)
{
printf("Ingrese la línea %d de texto. Máximo 50 caracteres: ", i+1);
fgets(FRA[i], sizeof(FRA[i]), stdin);
FRA[i][strcspn(FRA[i], "\n")] = '\0';
/* Se lee la cadena de caracteres dentro del ciclo. */
}
printf("\n");
for(i=0; i<n; i++)
{
strcpy(cad, FRA[i]);
t = longitud(cad);
if(t > l)
{
l = t;
p = i;
}
}
printf("\nLa cadena con mayor longitud es: ");
puts(FRA[p]);
printf("\nLongitud: %d", l);

return 0;
}
int longitud(char *cadena)
/* Esta función calcula la longitud de la cadena. Es idéntica a la función
cuenta del programa 7.13. */
{
int cue = 0;
while(cadena[cue] != '\0')
cue++;
return (cue);
}
