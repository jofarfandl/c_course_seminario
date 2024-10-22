#include <stdio.h>
#include <windows.h>
/*
4. Programa que reciba como entrada un caracter y muestre su correspondiente valor en ASCII en decimal, octal y hexadecimal en columnas tabuladas
Nombre: Farfan de Leon Jose Osvaldo
Codigo: 214796622
Carrera: ingenieria en computacion
Nombre del programa: "EL BROMAS"
*/

static char const esi = 201;
static char const esd = 187;
static char const eii = 200;
static char const eid = 188;
static char const V = 186;
static char const H = 205;

int main()
{
    char a;
    printf("ingrese un caracter: ");
    scanf("%c",&a);
    system("cls");

    printf("%c%c%c%c%c%c",esi,H,H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c\n",H,H,H,esd);
    printf("%c                            %c\n",V,V);
    printf("%c          ASCCI:            %c\n",V,V);
    printf("%c            %c               %c\n",V,a,V);
    printf("%c       Hexadecimal:         %c\n",V,V);
    printf("%c           %x               %c\n",V,a,V);
    printf("%c          Octal             %c\n",V,V);
    printf("%c           %o              %c\n",V,a,V);
    printf("%c         Decimal            %c\n",V,V);
    printf("%c           %d              %c\n",V,a,V);
    printf("%c                            %c\n",V,V);
    printf("%c%c%c%c%c%c",eii,H,H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c%c",H,H,H,H,H);
    printf("%c%c%c%c\n",H,H,H,eid);
    return 0;

}
