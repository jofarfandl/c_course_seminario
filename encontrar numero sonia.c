    #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x, num, count=0;

    srand(time(NULL));
    x=rand()%10+1;
    printf("%i",x);
    printf("Encuentre el numero\n");
    do{
        printf("Ingrese el numero a adivinar: ");
        scanf("%i",&num);
        if(num > x){
                system("cls");
                printf("El numero es menor a:%i\n",num);
                count++;
        }
        if(num < x) {
            system("cls");
                printf("El numero es mayor a:%i\n",num);
                count++;
        }
    }while( num != x && count!=4);
    system("cls");
    if(x==num){
        printf("Felicidades, Encontraste el numero: %i\n\n",x);
    }
    else{
        printf("Maximo de intentos realizados,el numero era: %i, Suerte para la proxima\n\n",x);
    }
    system("pause");
}
