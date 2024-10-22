#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
    int opc;
    printf("\t\tmenu\n");
    printf("1.- Llenar con valores aleatorios (entre 1 y 50) un vector de enteros de 20 elementos. Luego, imprimir los elementos que contenga el vector que sean múltiplos de 3. Imprimir también todos los elementos que estén almacenados en las posiciones múltiplos de 3.\n");
    printf("2.- Supongamos que tenemos un vector de 15 elementos con valores enteros. Generar un segundo vector con todos los elementos pares y un tercero con todos los elementos nones.\n");
    printf("3.- Ayudame con el programa con el que quiero capturar las calificaciones de mi grupo. Una vez capturadas las calificaciones, quiero calcular el promedio degrupo, gracias!!\n");
    printf("ingrese una opcion valida: ");
    scanf("%i",&opc);
    switch(opc){
        case 1:
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
            Sleep(5000);
            system("cls");
            break;




    }

}





/*
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






int main(){
    int x,i,j,aux1=0,aux2=0;
    int v[15], p[15], n[15];
    srand(time(NULL));
    for( i=0 ; i<15 ; i++){
        x=rand()%50+1;
        v[i]=x;
    }
    for( j=0 ; j<15 ; j++){
        if(v[j]%2==0){
            p[aux1]=v[j];
            aux1++;
        }
        else{
            n[aux2]=v[j];
            aux2++;
        }
    }
    printf("Vector base:\n");
    for( i=0 ; i<15 ; i++){
        printf("%d\n",v[i]);
    }
    printf("vector con elementos pares:\n");
    for( i=0 ; i<aux1 ; i++){
    printf("%d\n",p[i]);
    }
    printf("vectores con elementos nones\n");
    for( i=0 ; i<aux2 ; i++){
    printf("%d\n",n[i]);
    }
}


int main(){

    int x, i,j;
    int v[20];
    srand(time(NULL));
    for( i=0 ; i<20 ; i++){
        x=rand()%50+1;
        v[i]=x;
    }
    printf("Elementos que contengan vector multiple de 3: \n");
    for( j=0 ; j<20 ; j++){
        if(v[j]%3==0) printf("el arreglo con indice[%d] = %d\n",j,v[j]);
    }
    printf("Elementos con posicion multiple de 3:\n");
    for( j=0 ; j<20 ; j++){
        if(j%3==0 && j!=0) printf("el arreglo con indice[%d] = %d\n",j,v[j]);
    }
}
*/
