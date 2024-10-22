#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

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
    printf("\nvector con elementos pares:\n");
    for( i=0 ; i<aux1 ; i++){
    printf("%d\n",p[i]);
    }
    printf("\nvectores con elementos nones\n");
    for( i=0 ; i<aux2 ; i++){
    printf("%d\n",n[i]);
    }
}
