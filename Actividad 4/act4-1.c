#include <stdio.h>
#include <windows.h>

/*
1. Programa que solicite el nombre, edad, estatura y sexo de una persona y al terminar de capturar le regrese un mensaje que se visualice en la pantalla dentro de una ventana
Nombre: Farfan de Leon Jose Osvaldo
Codigo: 214796622
Carrera: ingenieria en computacion
Nombre del programa: "EL ARTESANO"
*/

static char const esi = 201;
static char const esd = 187;
static char const eii = 200;
static char const eid = 188;
static char const V = 186;
static char const H = 205;
int main()
{
    char nom[40],sex[1];
    int edad;
    float est;

    printf("ingrese su nombre: ");
    scanf("%s",&nom);
    printf("\ningrese su edad: ");
    scanf("%i",&edad);
    printf("\ningrese su estatura ejemplo(1.65): ");
    scanf("%f",&est);
    printf("\ningrese su sexo (ejemplo f o m): ");
    scanf("%s",&sex);
    system("cls");

    printf("%c%c%c%c%c%c",esi,H,H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c\n",H,H,H,esd);

    printf("%c      %s:      %c\n",V,nom,V);
    printf("%c        tu edad es: %i      %c\n",V,edad,V);
    printf("%c       Mides: %f      %c\n",V,est,V);
    printf("%c      tu sexo es: %s         %c\n",V,sex,V);

    printf("%c%c%c%c%c%c",eii,H,H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c\n",H,H,H,eid);

    return 0;
}
