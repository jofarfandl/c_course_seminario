#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int opc, num, lim, i, num1=1, res, primo, contador;
    do{
        printf("\t\tMENU\n");
        printf("1.-Calcular la tabla de multiplicar del numero que quiera hasta el multiplo que quiera\n");
        printf("2.-Calcular el factorial de un numero\n");
        printf("3.-Calcular la potencia de un numero\n");
        printf("4.-Mostrar los numeros primos que hay menores de un valor que indique el usuar\n");
        printf("5.- SALIR\n");
        printf("Ingrese una opcion valida: ");
        scanf("%i",&opc);
        system("cls");
        switch(opc){
        case 1:
            printf("\tCalcular la tabla de multiplicar del numero que quiera hasta el multiplo que quiera\n\n");
            printf("Ingrese el numero de la tabla que desea mostrar: ");
            scanf("%i",&num);
            printf("ingrese el numero hasta el que se desea imprimir: ");
            scanf("%i",&lim);
            for( i=num1 ; i<=(lim) ; i++){
                printf("%i x %i = %i\n", num, num1, num*num1);
            num1++;
            }
        break;

        case 2:
            printf("\tCalcular el factorial de un numero\n\n");
            printf("Seleccione el numero del cual desea sacar su factorial:");
            scanf("%i",&num);
            for( i=num-1 ; i>=(1) ; i--){
                num = num*i;
            }
            printf("el resultado del factorial es: %i\n\n",num);
            Sleep(7000);
            system("cls");
        break;

        case 3:
            printf("Ingrese un numero para elevar a una potencia:");
            scanf("%i",&num);
            printf("Ingresa la potencia: ");
            scanf("%i",&num1);
            res=num;
            for( i=1 ; i<num1 ; i++){
                //printf("%i",i);
                res=res*num;
            }
            printf("el resultado de la potencia es: %i\n",res);
            Sleep(5000);
            system("cls");
        break;

        case 4:
            printf("ingrese el numero esta el cual se desea conseguir los numeros primos: ");
            scanf("%i",&num);
            printf("Los numeros primos son: ");
            for (int j=2 ; j<=num ; j++){
                 int a=0;
                 for(int i=1;i<=100;i++){
                     if(j%i==0)
                     a++;
                 }
                 if (a==2) printf("%d, ", j);
            }
        break;

        case 5:
            printf("Fin del programa\n\n");
        break;
        default:
            printf("Dato invalido, intentelo de nuevo");
            Sleep(2000);
            system("cls");
        }
    }while(opc != 5);
}



