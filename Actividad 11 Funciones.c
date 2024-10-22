//FARFAN DE LEON JOSE OSVALDO Actividad 11.Funciones
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void main(){
    int op;
    do{
        printf("\t\t\t\tMenu\n");
        printf("1. Recibir los votos otorgados a los 3 candidatos a presidente de la FEU de las proximas elecciones e imprima el total de votos que hubo. El numero de votos de cada candidato. Y cu�l fue el candidato ganador.\n\n");
        printf("2. Presentar un menu en el que el usuario pueda decidir la operacion que desea realizar. Puede calcular la tabla de multiplicar del numero que quiera hasta los multiplos que el decida. Calcular el factorial de un numero. Calcular la potencia de x a la y (No usar funci�n pow) y Mostrar los numeros primos que hay menores de un valor que indique el usuario.\n\n");
        printf("3. Simular el juego �piedra, papel y tijeras�. Los jugadores ingresaran su nombre y se lanza el juego. En pantalla se mostrara un mensaje con el nombre del jugador que gano, con un mensaje que diga �Fulanito con (piedra/papel/tijera) le gano a sultanito con (piedra/papel/tijera)�.\n\n");
        printf("4. Generar un valor aleatorio y el usuario lo intente adivinar. El usuario tendr� solamente 4 intentos y el mismo programa le dara pistas de que el numero es mayor o menor al que introdujo. Si adivina dentro de los 4 intentos, saldr� un mensaje de felicitaciones, si se le terminan los intentos saldra un mensaje de -suerte para la proxima-.\n\n");
        printf("5. Salir\n");
        printf("Ingrese una opcion valida: ");
        scanf("%i",&op);
        switch(op){
            case 1:
                eje1();
                system("cls");
            break;
            case 2:
                eje2();
                system("cls");
            break;
            case 3:
                eje3();
                system("cls");
            break;
            case 4:
                eje4();
                system("cls");
            break;
            case 5:
                printf("Fin del programa\n\n");
            break;
            default:
                printf("Opcion invalida, intentelo de nuevo");
                Sleep(2000);
                system("cls");

        }
    }while(op != 5);
}

void eje1(){
    system("cls");
    int can1=0, can2=0, can3=0, voto;
    char opc;
    do{
        do{
            printf("\tElecciones FEU\n\n");
            printf("1.-Candidato numero uno\n");
            printf("2.-Candidato numero dos\n");
            printf("3.-Candidato numero tres\n");
            printf("Ingrese el numero del candidato por el cual desea votar:");
            scanf("%i",&voto);
            if(voto != 1 && voto != 2 && voto != 3){
                    printf("error dato invalido, intentelo de nuevo");
                    Sleep(3000);
                    system("cls");
            }
        }while(voto != 1 && voto != 2 && voto != 3);
        if(voto == 1) can1++;
        if(voto == 2) can2++;
        if(voto == 3) can3++;
        printf("Desea ingresar otro voto presione -s- de lo contrario presione -n-:");
        fflush(stdin);
        scanf("%c",&opc);
        system("cls");
    }while(opc != 'n');
    system("cls");
    printf("Resultados:\n\n");
    printf("Candidato 1 obtuvo: %i votos\n",can1);
    printf("Candidato 2 obtuvo: %i votos\n",can2);
    printf("Candidato 3 obtuvo: %i votos\n",can3);
    if(can1>can2 && can1>can3) printf("El ganador es el candidato numero uno\n");
    if(can2>can1 && can2>can3) printf("El ganador es el candidato numero dos\n");
    if(can3>can1 && can3>can2) printf("El ganador es el candidato numero tres\n");
    system("PAUSE");
}

void eje2(){
    system("cls");
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
            system("PAUSE");
            system("cls");
        break;

        case 2:
            printf("\tCalcular el factorial de un numero\n\n");
            printf("Seleccione el numero del cual desea sacar su factorial:");
            scanf("%i",&num);
            for( i=num-1 ; i>=(1) ; i--){
                num = num*i;
            }
            printf("el resultado del factorial es: %i\n\n",num);
            system("PAUSE");
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
            system("PAUSE");
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
            system("PAUSE");
            system("cls");
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


void eje3()
{
    system("cls");
    char jugador1[30];
    int jugada1;
    char jugador2 [30];
    int jugada2;
    int piedra=1;
    int papel=2;
    int tijeras=3;
    printf("jugador 1 di tu nombre\n");
    scanf("%s",&jugador1);
    printf("jugador 2 di tu nombre\n");
    scanf("%s",&jugador2);
    do{
    printf("%s que haras 1) piedra 2)papel 3)tijeras 4)salir\n ",jugador1);
    scanf("%d",&jugada1);
    system("cls");
    printf("%s que haras 1) piedra 2)papel 3)tijeras 4)salir\n ",jugador2);
    scanf("%d",&jugada2);
    if ((jugada1 == 1)&&(jugada2==1)){
        printf("Empate ambos con piedra\n");}
    if ((jugada1 == 1)&&(jugada2==2)){
        printf("Gana %s con papel\n",jugador2);}
    if ((jugada1 == 1)&&(jugada2==3)){
        printf("Gana %s con piedra\n",jugador1);
    }
    if ((jugada1 == 2)&&(jugada2==2)){
        printf("Empate ambos con papel\n");}
    if ((jugada1 == 2)&&(jugada2==1)){
        printf("Gana %s con papel\n",jugador1);}
    if ((jugada1 == 2)&&(jugada2==3)){
        printf("Gana %s con tijeras\n",jugador2);
    }
        if ((jugada1 == 3)&&(jugada2==3)){
        printf("Empate ambos con tijeras\n");}
    if ((jugada1 == 3)&&(jugada2==2)){
        printf("Gana %s con tijeras\n",jugador1);}
    if ((jugada1 == 3)&&(jugada2==1)){
        printf("Gana %s con piedra\n",jugador2);
    }
    }while((jugada1!=4)&&(jugada2!=4));
    return 0;
}


void eje4(){
    system("cls");
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
