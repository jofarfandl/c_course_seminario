#include <stdio.h>
#include <math.h> //biblioteca para sacar la potencia
#include <windows.h>//libreria para imprimir cada 30 segundos
/*
2. Programa que reciba dos números y con ellos calcule su suma, resta, multiplicación, división, residuo y potencia. Cada resultado deberá mostrarse con un tiempo de 30 segundo entre cada uno.
Nombre: Farfan de Leon Jose Osvaldo
Codigo: 214796622
Carrera: ingenieria en computacion
Nombre del programa: "EL EXPLORER"
*/
int main()
{
    int a,b,s,r,m,mo,p;
    float d;

    printf("ingrese el primer numero: ");
    scanf("%i",&a);
    printf("ingrese el segundo numero: ");
    scanf("%i",&b);
    s=a+b;
    r=a-b;
    m=a*b;
    d=a/b;
    mo=a%b;
    p= pow(a,b);
    printf("\nbasado en los numeros %i y %i",a,b);
    printf("\nel resultado de la suma es: %i",s);
    Sleep(30000);
    printf("\nel resultado de la resta es: %i",r);
    Sleep(30000);
    printf("\nel resultado de la multiplicacion es: %i",m);
    Sleep(30000);
    printf("\nel resultado de la division es: %f",d);
    Sleep(30000);
    printf("\nel resultado del modulo es: %i",mo);
    Sleep(30000);
    printf("\nel resultado de la potencia es: %i",p);
    return 0;
}
