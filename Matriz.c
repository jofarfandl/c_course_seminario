#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char abc[3][3]={"abc", "def", "ghi"};
    int i;
    for(i=0 ; i<3 ; i++) printf("%c",abc[0][i]);
    for(i=1 ; i<3 ; i++) printf("%c",abc[i][2]);
    for(i=1 ; i>=0 ; i--) printf("%c",abc[2][i]);
    for(i=0 ; i<2 ; i++) printf("%c",abc[1][i]);

}

/*int main(){
    char nombres[5][20]={"Sonia", "Alexa", "Ana", "Luis", "Sofia"};
    char busqueda[20]= "el name";
    int i,b=0;

    printf("Ingrese el numero que desa buscar: ");
    scanf("%s",&busqueda);
    for(i=0 ;i<5 ; i++){
        if(strcmp(busqueda,nombres[i]) == 0 ){
            printf("Nombre encontrado:\n%s se encuentra en la fila: %i\n",busqueda, i);
            b++;
        }
    }
    if(b==0) printf("Ese nombre no existe en nuestra base de datos\n");
}*/
