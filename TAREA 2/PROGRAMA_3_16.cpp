


#include <stdio.h>

/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor
y peor promedio.
I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real.*/

int main(void)
{
int I, MAT, MAMAT = 0, MEMAT = 0;
float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;
int CONT = 0;

printf("Ingrese la matricula del primer alumno:\t");
scanf("%d", &MAT);

while (MAT != 0)
    {
SUM = 0;

for (I = 1; I <= 5; I++)
        {
printf("Ingrese la calificacion %d del alumno: ", I);
scanf("%f", &CAL);

SUM = SUM + CAL;
        }

PRO = SUM / 5;
CONT++;

printf("\nMatricula: %d\tPromedio: %.2f\n", MAT, PRO);

if (CONT == 1 || PRO > MAPRO)
        {
MAPRO = PRO;
MAMAT = MAT;
        }

if (CONT == 1 || PRO < MEPRO)
        {
MEPRO = PRO;
MEMAT = MAT;
        }

printf("\nIngrese la matricula del siguiente alumno (0 para terminar): ");
scanf("%d", &MAT);
    }

if (CONT > 0)
    {
printf("\nAlumno con mejor promedio: %d\t%.2f", MAMAT, MAPRO);
printf("\nAlumno con peor promedio: %d\t%.2f\n", MEMAT, MEPRO);
    }
else
    {
printf("\nNo se ingresaron alumnos.\n");
    }

    return 0;

}
