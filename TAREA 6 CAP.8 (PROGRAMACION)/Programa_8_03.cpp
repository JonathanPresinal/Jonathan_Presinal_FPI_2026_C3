#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
char calle[20];
int numero;
int cp;
char localidad[20];
} domicilio;
struct empleado
{
char nombre[20];
char departamento[20];
float sueldo;
domicilio direccion;
};
void Lectura(struct empleado *a)
{
printf("\nIngrese el nombre del empleado: ");
fgets(a->nombre, 20, stdin);
a->nombre[strcspn(a->nombre, "\n")] = '\0';
printf("Ingrese el departamento de la empresa: ");
fgets(a->departamento, 20, stdin);
a->departamento[strcspn(a->departamento, "\n")] = '\0';
printf("Ingrese el sueldo del empleado: ");
scanf("%f", &a->sueldo);
scanf("%*1[\n]");
printf("--Ingrese la direccion del empleado--");
printf("\n\tCalle: ");
fgets(a->direccion.calle, 20, stdin);
a->direccion.calle[strcspn(a->direccion.calle, "\n")] = '\0';
printf("\tNumero: ");
scanf("%d", &a->direccion.numero);
printf("\tCodigo Postal: ");
scanf("%d", &a->direccion.cp);
scanf("%*1[\n]");
printf("\tLocalidad: ");
fgets(a->direccion.localidad, 20, stdin);
a->direccion.localidad[strcspn(a->direccion.localidad, "\n")] = '\0';
}
int main(void)
{
struct empleado e0 = {"Arturo", "Compras", 15500.75, {"San Jeronimo", 120,
3490, "Toluca"}};
struct empleado *e1, *e2, e3, e4;
e1 = (struct empleado *)malloc(sizeof(struct empleado));
if (e1 == NULL)
return 1;
printf("\nIngrese el nombre del empleado 1: ");
scanf("%19s", (*e1).nombre);
scanf("%*1[\n]");
printf("Ingrese el departamento de la empresa: ");
fgets(e1->departamento, 20, stdin);
e1->departamento[strcspn(e1->departamento, "\n")] = '\0';
printf("Ingrese el sueldo del empleado: ");
scanf("%f", &e1->sueldo);
printf("--Ingrese la direccion del empleado--");
printf("\n\tCalle: ");
scanf("%*1[\n]");
fgets(e1->direccion.calle, 20, stdin);
e1->direccion.calle[strcspn(e1->direccion.calle, "\n")] = '\0';
printf("\tNumero: ");
scanf("%d", &e1->direccion.numero);
printf("\tCodigo Postal: ");
scanf("%d", &e1->direccion.cp);
printf("\tLocalidad: ");
scanf("%*1[\n]");
fgets(e1->direccion.localidad, 20, stdin);
e1->direccion.localidad[strcspn(e1->direccion.localidad, "\n")] = '\0';
printf("\nIngrese el nombre del empleado 3: ");
scanf("%19s", e3.nombre);
scanf("%*1[\n]");
printf("Ingrese el departamento de la empresa: ");
fgets(e3.departamento, 20, stdin);
e3.departamento[strcspn(e3.departamento, "\n")] = '\0';
printf("Ingrese el sueldo del empleado: ");
scanf("%f", &e3.sueldo);
printf("--Ingrese la direccion del empleado--");
printf("\n\tCalle: ");
scanf("%*1[\n]");
fgets(e3.direccion.calle, 20, stdin);
e3.direccion.calle[strcspn(e3.direccion.calle, "\n")] = '\0';
printf("\tNumero: ");
scanf("%d", &e3.direccion.numero);
printf("\tCodigo Postal: ");
scanf("%d", &e3.direccion.cp);
printf("\tLocalidad: ");
scanf("%*1[\n]");
fgets(e3.direccion.localidad, 20, stdin);
e3.direccion.localidad[strcspn(e3.direccion.localidad, "\n")] = '\0';
e2 = (struct empleado *)malloc(sizeof(struct empleado));
if (e2 == NULL)
{
free(e1);
return 1;
}
Lectura(e2);
Lectura(&e4);
printf("\nDatos del empleado 1\n");
printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e1->nombre, e1->departamento,
e1->sueldo,
e1->direccion.calle, e1->direccion.numero, e1->direccion.cp,
e1->direccion.localidad);
printf("\nDatos del empleado 4\n");
printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e4.nombre, e4.departamento, e4.sueldo,
e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);
free(e1);
free(e2);
return 0;
}
