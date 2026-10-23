#include <stdio.h>
/* Elección */

int main(void)
{
 int ELE[5] = {0};  /* Inicializa los votos en cero */
 int I, VOT;

 printf("Ingresa el primer voto (0 - Para terminar): ");
 scanf("%d", &VOT);

 while (VOT != 0)
    {
        /* Verificar que el voto sea válido */
        if ((VOT > 0) && (VOT < 6))
        {
            ELE[VOT - 1]++;
        }
        else
        {
            printf("\nEl voto ingresado es incorrecto.\n");
        }

        printf("Ingresa el siguiente voto (0 - Para terminar): ");
        scanf("%d", &VOT);
    }

 /* Mostrar los resultados */
 printf("\n\nResultados de la Elección\n");

 for (I = 0; I < 5; I++)
    {
        printf("\nCandidato %d: %d votos", I + 1, ELE[I]);
    }

    printf("\n");
    return 0;
}
