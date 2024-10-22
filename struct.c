#include <stdio.h>
#include <stdlib.h>


int main(){
    int num, i, res, x;
    printf("Tabla de multiplicar para ni�os\n");
    printf("ingrese el numero de la tabla que desea del 1 al 10: ");
    scanf("%i",&num);
    x=1;
    while(1){
        for(i=1 ; i<=10 ; i++){
            printf("Cuanto es %i x %i = ",num,i);
            scanf("%i",&res);
            if(res != num*i){
                printf("Te equivocaste, se regresara al inicio\n");
                break;
            }
        }
        printf("Felicidades");
        break;
    }
}

/*int main(){
    int i;

    struct empleado{
        char nombre[50], raza[20], color[20];
        int edad;
        float peso;
    }mascota[1];
    printf("Datos de la mascota\n",i+1);

    printf("Ingrese el Nombre: ");
    scanf("%s",&mascota[1].nombre);
    printf("Ingrese su edad: ");
    scanf("%i",&mascota[1].edad);
    printf("Ingrese la raza: ");
    scanf("%s",&mascota[1].raza);
    printf("Ingrese su peso: ");
    scanf("%f",&mascota[1].peso);
    printf("Ingrese su color: ");
    scanf("%s",&mascota[1].color);

    printf("\n\nmascota\n");
    printf("Nombre:%s \n",mascota[1].nombre);
    printf("Edad:%i \n",mascota[1].edad);
    printf("Raza:%s \n",mascota[1].raza);
    printf("Peso:%f \n",mascota[1].peso);
    printf("Color:%s \n",mascota[1].color);
}*/



