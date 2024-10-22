#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


int main(){
    int x,i,cali,suma=0;
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%i",&x);
    int cal[x];
    for( i=0 ; i<x ; i++){
        printf("ingrese la calificacion del alumno con numero de lista %i: ",i+1);
        scanf("%i",&cal[i]);
        suma=suma+cal[i];
    }
    printf("\nCalficaciones: ");
    for( i=0 ; i<x ; i++){
        printf("%d,",cal[i]);
    }
    printf("\nPromedio: %i\n",suma/x);
    printf("\t\tAunque todos sabemos que el promedio del grupo es 100\n\n\n");
}
