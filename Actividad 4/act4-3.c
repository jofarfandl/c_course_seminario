#include <stdio.h>
#include <windows.h>
/*
Nombre
3. Programa que muestre cual es el espacio en bytes ocupado por cada uno de los tipos de datos de C "int", "float", etc. en el sistema operativo y compilador que utilizas: Farfan de Leon Jose Osvaldo
Codigo: 214796622
Carrera: ingenieria en computacion
Nombre del programa: "EL GOOGLE"
*/
int main()
{
    printf("Programa que muestre el espacio en bytes ocupado por cada tipo de datos\n");
    printf("int: %i \n",sizeof(int));
    printf("float: %i \n",sizeof(float));
    printf("char: %i \n",sizeof(char));
    printf("double: %i \n",sizeof(double));
    return 0;
}
