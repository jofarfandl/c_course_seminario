#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){

    int x, i,j;
    int v[20];
    srand(time(NULL));
    for( i=0 ; i<20 ; i++){
        x=rand()%50+1;
        v[i]=x;
    }
    printf("vector base:\n");
    for( j=0 ; j<20 ; j++){
    printf("elemento[%d] = %d\n",j,v[j]);
    }
    printf("\nElementos que contengan vector multiple de 3: \n");
    for( j=0 ; j<20 ; j++){
        if(v[j]%3==0) printf("el arreglo con indice[%d] = %d\n",j,v[j]);
    }
    printf("\nElementos con posicion multiple de 3:\n");
    for( j=0 ; j<20 ; j++){
        if(j%3==0 && j!=0) printf("el arreglo con indice[%d] = %d\n",j,v[j]);
    }
}
