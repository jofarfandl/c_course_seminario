#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main(){
    float cal[2][40]={0},prom=0,prom1=0;
    int g,a,n, num;
    for(g=0 ; g<2 ; g++){
        printf("Cuantos alumnos hay en el grupo %i?: ",g+1);
        scanf("%i",&n);
        prom=0;
        for(a=0 ; a<n ; a++){
            printf("Ingrese la calificacion del alumno %i: ",a+1);
            scanf("%f",&cal[g][a]);
            prom=prom+cal[g][a];
        }
        if(g==0) prom1=prom/n;
        prom=prom/n;
    }
    printf("Ingrese el grupo que desea ver: ");
    scanf("%i",&num);
    if(num==0) printf("Promedio: %f\n",prom1);
    else printf("promedio: %f\n",prom);
    num-=1;
    for(a=0 ; a<40 ; a++){
        if(cal[num][a]>0){
            printf("Alumno %i: %f\n",a+1,cal[num][a]);
        }
    }
}
